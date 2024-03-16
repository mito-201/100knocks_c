#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define CHANGE_NUM 30

int get_random(int min, int max);

int main(void)
{
    char card_data[4][13][32];      // カードデータ、入れ替えない
    char* card[4][13];              // シャッフルしたカードデータを格納
    char card_num[13][9] = {"Ａ", "２", "３", "４", "５", "６", "７", "８", "９", "１０",
                        "Ｊ", "Ｑ", "Ｋ"};
    int i ;

    for (i = 0; i < 13; i++){
        // 
        snprintf(card_data[0][i], 32, "%s%s", "ダイヤ", card_num[i]);
        card[0][i] = card_data[0][i];

        snprintf(card_data[1][i], 32, "%s%s", "ハート", card_num[i]);
        card[1][i] = card_data[1][i];

        snprintf(card_data[2][i], 32, "%s%s", "スペード", card_num[i]);
        card[2][i] = card_data[2][i];

        snprintf(card_data[3][i], 32, "%s%s", "クローバー", card_num[i]);
        card[3][i] = card_data[3][i];
    }

    // 指定した回数分、カードをシャッフルする
    srand((unsigned int)time(NULL));

    int change_card[2][2];
    for (i = 0; i < CHANGE_NUM; i++) {
        // 入れ替え元
        change_card[0][0] = get_random(0, 3);
        change_card[0][1] = get_random(0, 12);
        // 入れ替え先
        change_card[1][0] = get_random(0, 3);
        change_card[1][1] = get_random(0, 12);

        // 入れ替え
        card[ change_card[0][0] ][ change_card[0][1] ] = card_data[ change_card[1][0] ][ change_card[1][1] ];
        card[ change_card[1][0] ][ change_card[1][1] ] = card_data[ change_card[0][0] ][ change_card[0][1] ];
    }

    // シャッフル後のカードデータ表示
    for( i = 0; i < 13; i++) {
        printf("%s\t%s\t%s\t%s\n", card[0][i], card[1][i], card[2][i], card[3][i]);
    }

    return 0;
}

// min <= ランダムな戻り値 <= max
int get_random(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
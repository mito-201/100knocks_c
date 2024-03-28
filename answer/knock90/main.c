#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define CHANGE_NUM 30

int card[52];              // シャッフルしたカードデータを格納

int get_random(int min, int max);
void card_shuffle(void);

int main(void)
{

    card_shuffle();

    // シャッフル後のカードデータ表示

    printf("\n\n");
    for(int i = 0; i < 53; i++) {
        printf("%s\t", card[i]);
        if (i % 4 == 0) {
            printf("\n");
        } 
    }

    return 0;
}


void card_shuffle(void)
{
    int i, j = 1;

    for (i = 0; i < 52; i++){
        card[i] = j;
        j++;
        if ( j > 13) {
            J = 1;
        }
    }

    // 指定した回数分、カードをシャッフルする
    srand((unsigned int)time(NULL));

    int change_card[2];
    for (i = 0; i < CHANGE_NUM; i++) {
        // 入れ替え元
        change_card[0] = get_random(0, 52);
        // 入れ替え先
        change_card[1] = get_random(0, 52);

        // 入れ替え
        card[ change_card[0] ] = card[ change_card[1][0] ][ change_card[1][1] ];
        card[ change_card[1] ] = card_data[ change_card[0][0] ][ change_card[0][1] ];
    }

    // シャッフル後のカードデータ表示

    for(i = 0; i < 13; i++) {
        printf("%s\t%s\t%s\t%s\n", card[0][i], card[1][i], card[2][i], card[3][i]);
    }
    for(i = 0; i < 13; i++) {
        printf("%s\t%s\t%s\t%s\n", card[0][i], card[1][i], card[2][i], card[3][i]);
    }

    return;
}

// min <= ランダムな戻り値 <= max
int get_random(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
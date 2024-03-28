#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define CHANGE_NUM 30

int card[52];              // シャッフルしたカードデータを格納

int get_random(int min, int max);
void card_set(void);
void card_shuffle(void);

int main(void)
{

    card_set();
    card_shuffle();

    // シャッフル後のカードデータ表示

    printf("\n\n");
    for(int i = 0; i < 53; i++) {
        printf("%d\t", card[i]);
        if ((i + 1) % 4 == 0) {
            printf("\n");
        } 
    }

    return 0;
}

void card_set(void)
{
    int i, j = 1;

    for (i = 0, j = 1; i < 52; i++, j++){
        card[i] = j;
        if ( j > 13) {
            j = 1;
        }
    }

    return;
}

void card_shuffle(void)
{
    // 指定した回数分、カードをシャッフルする
    srand((unsigned int)time(NULL));

    int change_card[2], card_temp;
    for (int i = 0; i < CHANGE_NUM; i++) {
        // 入れ替え元
        change_card[0] = get_random(0, 52);
        // 入れ替え先
        change_card[1] = get_random(0, 52);

        // 入れ替え
        card_temp = card[ change_card[0] ];
        card[ change_card[0] ] = card[ change_card[1] ];
        card[ change_card[1] ] = card_temp;
    }

    return;
}

// min <= ランダムな戻り値 <= max
int get_random(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
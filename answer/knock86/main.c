#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define bool _Bool
#define false ((bool)+0)
#define true ((bool)+1)

char name[2][10] = {"あなた","わたし"};

int get_stone();
void judge_stone(int, int);
int get_random(int, int);

int main(void)
{
    int stone_qty;
    do {
        printf("石の数を入力してください（10以上）: ");
        scanf("%d", &stone_qty);
    } while (stone_qty < 10);

    // 順番を決める
    int first_player;
    srand((unsigned int)time(NULL));
    first_player = get_random(0, 1);
    if (stone_qty % 4 == 1) {  // あまり1になる数字は先に石をとるほうが負けるため、プレイヤーを指定。
        first_player = 0;
    }
    if (first_player == 0) {
        printf("あなたからどうぞ\n");
    } else {
        printf("ではわたしから\n");
    }

    // 石の取り合い
    int stone, player = first_player;
    while (stone_qty > 1) {
        switch(player) {
            case 0:  // プレイヤーの番
                stone = get_stone();
                stone_qty = stone_qty - stone;
                printf("石の数： %d\n", stone_qty);

                // ゲームの判断
                judge_stone(player, stone_qty);

                player = 1;
                break;
            case 1:  // CPUの番
            default:
                switch(stone_qty) {
                    case 4:
                        stone = 3;
                        break;
                    case 3:
                        stone = 2;
                        break;
                    case 2:
                        stone = 1;
                        break;
                    default:
                        stone = (stone_qty - 5) % 4;
                }
                printf("%d個取ります\n", stone);
                stone_qty = stone_qty - stone;
                printf("石の数： %d\n", stone_qty);

                // ゲームの判断
                judge_stone(player, stone_qty);

                player = 0;
        }

    }

    return 0;
}

// 手入力による石の個数決め
int get_stone()
{
    int num = 0;

    do {
        printf("何個とる（１～３個）？: ");
        scanf("%d", &num);

        if(num < 1 || 3 < num) {
            printf("再入力してください\n");
        }
    } while (num < 1 || 3 < num);

    return num;
}

// 勝敗の結果を決める
void judge_stone(int player, int stone_qty)
{
    if (stone_qty < 0) {
        printf("%sの反則負け\n", name[player]);
    } else if (stone_qty == 0) {
        printf("%sの負け\n", name[player]);
    } else if (stone_qty == 1) {
        printf("%sの勝ち\n", name[player]);
    }

    return;
}

// min <= ランダムな戻り値 <= max
int get_random(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
#include <stdio.h>

#define bool _Bool
#define false ((bool)+0)
#define true ((bool)+1)

int get_stone(int);
bool judge_stone(int, int);

int main(void)
{
    int stone_qty;
    do {
        printf("石の数を入力してください（10以上）: ");
        scanf("%d", &stone_qty);
    } while (stone_qty < 10);
    printf("石の数： %d\n", stone_qty);

    int stone, player;
    while (stone_qty > 1) {
        for (player =1 ; player <= 2; player++) {
            // プレイヤーの石の個数を取得
            stone = get_stone(player);
            stone_qty = stone_qty - stone;
            printf("石の数： %d\n", stone_qty);

            // ゲームの判断
            if (judge_stone(player, stone_qty) == true) {
                break;
            }
        }
    }

    return 0;
}

int get_stone(int a)
{
    int num = 0;

    do {
        printf("プレイヤー%dの番です\n何個とる（１～３個）？: ", a);
        scanf("%d", &num);

        if(num < 1 || 3 < num) {
            printf("再入力してください\n");
        }
    } while (num < 1 || 3 < num);

    return num;
}

bool judge_stone(int player, int stone_qty)
{
    bool result = false;

    if (stone_qty < 0) {
        printf("プレイヤー%dの反則負け\n", player);
        result = true;
    } else if(stone_qty == 0) {
        printf("プレイヤー%dの負け\n", player);
        result = true;
    } else if(stone_qty == 1) {
        printf("プレイヤー%dの勝ち\n", player);
        result = true;
    }

    return result;
}

#include <stdio.h>

int main(void)
{
    int stone_qty;
    do {
        printf("3石の数を入力してください（10以上）: ");
        scanf("%d", &stone_qty);
    } while (stone_qty < 10);

    int stone;

    while (stone_qty > 0) {
        printf("プレイヤー１の番です\n何個とる（１～３個）？: ");
        scanf("%d", &stone);

        if(x < 1 && 3 < x) {
            printf("もう一度入力してくださいn");
        }

    }
    return 0;
}
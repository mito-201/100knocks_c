#include <stdio.h>

int main(void)
{
    int x;
    printf("人数 ");
    scanf("%d", &x);

    int unit_price;

    if (x < 5) {
        unit_price = 600;
    } else if ( x < 20 ) {
        unit_price = 550;
    } else {
        unit_price = 500;
    }

    printf("料金 %d\n", x * unit_price);

    return 0;
}
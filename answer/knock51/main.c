#include <stdio.h>

int main(void)
{
    int x, i, j, data[3];

    printf("input money: ");
    scanf("%d", &x);

    data[0] = x / 100;
    data[1] = (x % 100) / 10;
    data[2] = (x % 10);

    printf("100円玉%d枚, 10円玉%d枚, 1円玉%d枚\n", data[0], data[1], data[2]);

    return 0;
}
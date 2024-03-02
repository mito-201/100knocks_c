#include <stdio.h>

int main(void)
{
    int x,y;

    printf("input 1st number: ");
    scanf("%d", &x);

    printf("input 2nd number: ");
    scanf("%d", &y);

    printf("和: %d\n", x + y);
    printf("差: %d\n", x - y);
    printf("積: %d\n", x * y);
    printf("商: %d, 余り: %d\n", x / y, x % y);

    return 0;
}
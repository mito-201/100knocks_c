#include <stdio.h>

int main(void)
{
    int x, y;
    printf("input index1: ");
    scanf("%d", &x);
    printf("input index2: ");
    scanf("%d", &y);

    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    printf("%d * %d = %d\n", array[x], array[y], array[x] * array[y]);

    return 0;
}
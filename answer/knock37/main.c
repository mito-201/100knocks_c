#include <stdio.h>

int main(void)
{
    int x;
    printf("input index: ");
    scanf("%d", &x);

    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    printf("value = %d\n", array[array[x]]);

    return 0;
}
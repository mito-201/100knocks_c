#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("input 1st number: ");
    scanf("%d", &x);
    printf("input 2nd number: ");
    scanf("%d", &y);

    z = x / y;
    printf("result: %d\n", z);
    printf("result: %d\n", z * y);

    return 0;
}
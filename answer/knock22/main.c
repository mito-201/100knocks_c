#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( x <= -10 || 10 <= x)
        printf("OK\n");

    return 0;
}
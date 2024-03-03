#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( 5 < x && x < 20)
        printf("OK\n");

    return 0;
}
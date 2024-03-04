#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    while( x > 0) {
        printf("*");
        x--;
    }

    printf("\n");
    return 0;
}
#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    for( int i = 1; i <= x; i++) {
        printf("*");

        if( i % 5 == 0) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
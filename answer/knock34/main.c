#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    for( int i = 1; i <= 9; i++) {
        if( i != x && i != x + 1 ) {
            printf("%d\n", i);
        }
    }

    printf("\n");
    return 0;
}
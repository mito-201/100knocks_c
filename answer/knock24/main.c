#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( -10 <= x && x < 0) {
        printf("OK\n");
    } else if( 10 <= x) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( -5 <= x && x < 10) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
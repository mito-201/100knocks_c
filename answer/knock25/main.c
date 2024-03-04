#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    if(x < -10) {
        printf("range 1\n");
    } else if(-10 <= x && x < 0) {
        printf("range 2\n");
    } else if(0 <= x ) {
        printf("range 3\n");
    }

    return 0;
}
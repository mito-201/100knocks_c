#include <stdio.h>

int main(void)
{
    int x[5] = {}, i;

    for( i = 0; i < 5; i++) {
        printf("input number: ");
        scanf("%d", &x[i]);
    }

    for( i = 0; i < 5; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
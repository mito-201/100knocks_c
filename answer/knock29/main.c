#include <stdio.h>

int main(void)
{
    int x, result = 0;

    for( int i = 0; i < 5; i++) {
        printf("input number: ");
        scanf("%d", &x);

        result += x;

    }

    printf("sum = %d\n", result);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    int j = 0;
    for( int i = x; i > 0; i--) {
        j += i;
    }

    printf("sum = %d\n", j);

    return 0;
}
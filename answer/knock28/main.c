#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    int j = 1;
    for( int i = x; i > 0; i--) {
        j = j * i;
    }

    printf("factorial = %d\n", j);

    return 0;
}
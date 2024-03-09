#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    int i = 1;
    while( x > 1) {
        if (x % 2) {
            x = x * 3 + 1;
        } else {
            x = x / 2;
        }

        printf("%d: %d\n", i, x);
        i++;
    }

    return 0;
}
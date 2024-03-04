#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    int i = 2;
    while (x > 1) {
        if (x % i == 0) {
            printf("%d ", i);
            x = x / i;
        } else {
            i ++;
        }
    }

    printf("\n");

    return 0;
}
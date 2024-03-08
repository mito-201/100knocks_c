#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    if (0 < x && x < 10) {
        printf("%d is a single figure.\n", x);
    } else {
        printf("%d is not a single figure.\n", x);
    }

    return 0;
}
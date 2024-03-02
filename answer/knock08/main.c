#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( x > 0) {
        printf("positive\n");
    }

    return 0;
}
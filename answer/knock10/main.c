#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    printf("absolute value is %d", abs(x));

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b, i;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);

    i = a;
    a = b;
    b = i;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("何円？ ");
    scanf("%d", &a);
    printf("1ドルは何円？ ");
    scanf("%d", &b);

    printf("%d円は%dドル%dセント\n", a, a / b, a % b * 100 / 120);

    return 0;
}
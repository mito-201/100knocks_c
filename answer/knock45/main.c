#include <stdio.h>

int main(void)
{
    int a, b;

    printf("距離 ");
    scanf("%d", &a);

    b = 610;
    if (a >= 1700) {
        a = a - 1700;
        b = b + (a / 313) * 80;
        
        if (a % 313) {
            b = b + 80;
        }
    }

    printf("金額 %d\n", b);

    return 0;
}
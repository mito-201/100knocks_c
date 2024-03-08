#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);
    printf("input c: ");
    scanf("%d", &c);

    int x = b * b - 4 * a * c;

    if( x > 0) {
        printf("2つの実数解\n");
    } else if ( x == 0 ) {
        printf("重解\n");
    } else {
        printf("2つの虚数解\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("2つの値をスペースで区切って入力：");
    scanf("%d %d", &x, &y);

    int i = 1;
    while (i <= x)
    {
        i++;
        if( x % i == 0 && y % i == 0) {
            break;
        }
    }
    
    if( x % i == 0 && y % i == 0) {
        printf("互いに素でない\n");
    } else {
        printf("互いに素\n");
    }

    return 0;
}
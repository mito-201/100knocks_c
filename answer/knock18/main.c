#include <stdio.h>

int main(void)
{
    int x[10], y, i;

    printf("input number: ");
    scanf("%d", &y);

    for( i = 0; i < 10; i++){
        x[i] = y;
        printf("%d\n", x[i]);
    }

    return 0;
}
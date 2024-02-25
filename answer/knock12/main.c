#include <stdio.h>

int main(void)
{
    int i, x = 0;

    printf("input number: ");
    scanf("%d", &x);

    for( i = 0; i < x; i++){
        printf("Hello World!\n");
    }

    return 0;
}
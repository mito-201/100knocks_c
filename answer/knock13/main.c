#include <stdio.h>

int main(void)
{
    int x = 0, i;

    printf("input number: ");
    scanf("%d", &x);

    for(i = 0; i <= x; i++){
        printf("%d\n", i);
    }
    return 0;
}
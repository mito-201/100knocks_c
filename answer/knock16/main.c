#include <stdio.h>

int main(void)
{
    int i, x = 0;

    printf("input number: ");
    scanf("%d", &x);

    for(i = 0; i <= x; i += 2){
        printf("%d\n", i);
    }

    return 0;
}
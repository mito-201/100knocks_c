#include <stdio.h>

int main(void)
{
    int x;

    printf("input number: ");
    scanf("%d", &x);

    if( x == 0){
        printf("zero\n");
    } else {
        printf("not zero\n");
    }

    return 0;
}
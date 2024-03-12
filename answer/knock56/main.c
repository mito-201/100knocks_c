#include <stdio.h>

int main(void)
{
    int x;
    printf("input number: ");
    scanf("%d", &x);

    int binary_num[16] = {};
    int i;
    
    for (i = 0; i < 16; i++) {
        if( x % 2 == 0) {
            binary_num[i] = 0;
        } else {
            binary_num[i] = 1;
        }
        x = x / 2;
    }
    
    for (i = 15; i >= 0; i--) {
        printf("%d", binary_num[i]);
    }

    printf("\n");

    return 0;
}
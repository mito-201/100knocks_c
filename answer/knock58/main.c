#include <stdio.h>

int main(void)
{
    int data[5], i, j;

    for( i = 0; i < 5; i++) {
        printf("input data[%d]:", i);
        scanf("%d", &data[i]);
    }

    for( i = 0; i < 5; i++) {
        printf("%d\t\t:", data[i]);

        for( j = 1; j <= data[i]; j++) {
            printf("*");
            if (j % 5 == 0){
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
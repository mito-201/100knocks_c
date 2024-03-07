#include <stdio.h>

int main(void)
{
    for( int i = 1; i <= 20; i++) {
        if( i % 5 == 0) {
            printf("bar\n");
        } else {
            printf("%d\n", i);
        }
    }

    printf("\n");
    return 0;
}
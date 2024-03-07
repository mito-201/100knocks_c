#include <stdio.h>

int main(void)
{
    int x = 0;
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    for( int i = 0; i < 9; i++) {
        printf("%d\n", array[x] - array[x + 1]);
        x++;
    }

    return 0;
}
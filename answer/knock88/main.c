#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int count = 0, i, result;

    srand(time(NULL));
    result = rand() % 100;
    if (result == 0) result = 1;

    do {
        printf("数を入力： ");
        scanf("%d", &i);
        count ++;

        if ( i > result) {
            printf("それより小さいです\n");
        } else if ( i < result ) {
            printf("それより大きいです\n");
        }
    } while (i != result);

    printf("正解!! %d回でクリア\n", count);
    return 0;
}
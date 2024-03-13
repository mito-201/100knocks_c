#include <stdio.h>

int main(void)
{
    int i, j, num[15][15] = {0};

    for(i = 0; i < 15; i++) {
        for (j = 0; j <= i; j++){
            if(i > 0 && j > 0) {
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
            } else {
                num[i][j] = 1;
            }
        }
        printf("\n");
    }


    for(i = 0; i < 15; i++) {
        for (j = 0; j <= i; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int i, j;

    for( i = 0; i < 3; i++) {
        for( j = 0; j < 9; j++) {
            printf("とんで");
        }
        for( j = 0; j < 3; j++) {
            printf("まわって");
        }
        printf("まわる\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int x[3];

    for( int i = 0; i < 3; i++) {
        printf("input number %d: ", i);
        scanf("%d", &x[i]);
    }

    if (x[0] <= x[1] && x[1] <= x[2]) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
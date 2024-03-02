#include <stdio.h>

int main(void)
{
    int x[10], i;

    for(i=0; i<10; i++){
        x[i] = i;
        printf("%d\n", x[i]);
    }

    return 0;
}
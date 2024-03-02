#include <stdio.h>
#define DEBUG 0

int main(void)
{
    int seikai;

    printf("正解の値1~99： ");
    scanf("%d", &seikai);
    seikai = seikai % 100;
    printf("CPUが推測する正解の値は%dです\n", seikai);

    int count = 0, result, i, min = 1, max = 99;
    do {
        result = (min + max) / 2;
        if (result > seikai) {
            i = 1;
            max = result - 1;
        } else if (result < seikai){
            i = -1;
            min = result + 1;
        }

        printf("%dですか？ %d\n", result, i);
        count++;

        #if DEBUG
            printf("min %d\tmax %d\n", min, max);
        #endif

    } while( result != seikai);

    printf("%d回で当てました\n", count);

    return 0;
}
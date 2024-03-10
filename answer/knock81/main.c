#include <stdio.h>

int main(void)
{
    int a, b, c, x;

    printf("3つの値を入力: ");
    scanf("%d %d %d", &a, &b, &c);

    int data[3] = {a};

    if (a <= b) {
        if (b <= c) {
            x = b;
        } else if (a <= c){
            x = c;
        } else {
            x = a;
        }
    } else if (a <= c) {
        x = a;
    } else if (b <= c){
        x = c;
    } else {
        x = b;
    }

    printf("%d\n", x);

    return 0;
}
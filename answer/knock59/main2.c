#include <stdio.h>

void print_array(int array[][3]);

int main(void)
{
    int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = { 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int i, j;

    printf("1つめの行列\n");
    print_array(a);

    printf("2つめの行列\n");
    print_array(b);

    printf("和\n");
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void print_array(int array[][3]){
    int i, j;

    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
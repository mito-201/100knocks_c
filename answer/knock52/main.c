#include <stdio.h>

int main(void)
{
    int year;
    printf("input year: ");
    scanf("%d", &year);

    if( year % 4 == 0) {
        if( year % 100 > 0) {
            printf("%d年は閏年である\n", year);
        } else if(year % 400 == 0){
            printf("%d年は閏年である\n", year);
        } else {
        printf("%d年は閏年でない\n", year);
        }
    } else {
        printf("%d年は閏年でない\n", year);
    }

    return 0;
}
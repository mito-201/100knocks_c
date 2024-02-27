#include <stdio.h>



int main(void)
{
    int birthday, result = 0;
    
    printf("誕生日をYYYYMMDDの形式で入力してください: ");
    scanf("%d", &birthday);

    // birthdayをintで試す
    result =+ birthday % 10000000;
    birthday =- birthday mod 10000000
    result =+ birthday % 10000000;

    printf("運命数は%d\n", result);

    // birthdayをstrで試す


    return 0;
}
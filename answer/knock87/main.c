#include <stdio.h>
#include <math.h>

#define DEBUG 0

int main(void)
{
    int birthday, i, k, result = 0;

    printf("誕生日をYYYYMMDDの形式で入力してください: ");
    scanf("%d", &birthday);

    do {
        for( i = 7; i >= 0; i--) {
            k = (int)pow( 10.0, (double)i);
            result = result + (birthday / k);
            birthday = birthday - ((birthday / k) * k);
            #if DEBUG
                printf("%d  %d  %d\n", result, birthday, k);
            #endif
        }
        if( result / 10 > 0) { // 各桁の和が2桁の場合、再計算するため値をリセットする
            birthday = result;
            result = 0;
        }
    } while(birthday > 0); // 各桁の和を足す際、birthdayから桁を引いていくため、0＝計算終了となる
    
    printf("運命数は%d\n", result);

    return 0;
}
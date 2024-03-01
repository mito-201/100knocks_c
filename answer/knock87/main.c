#include <stdio.h>
#include <math.h>

#define DEBUG 0

int main(void)
{
    int birthday, i, k, a, result = 0;
    double j;

    printf("誕生日をYYYYMMDDの形式で入力してください: ");
    scanf("%d", &birthday);

    for(a = 0; a < 2; a++) { // 誕生日を99999999としても各桁の和は最大2桁のため、2周する
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
    }
    
    printf("運命数は%d\n", result);

    return 0;
}
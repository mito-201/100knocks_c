#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[4][13][13];
    int i ;

    for (i = 0; i < 13; i++){
        strcpy(a[0][i], "ダイヤ" + (char)i);
        strcpy(a[1][i], "ハート" + (char)i);
//       a[1][i] = "ハート" & (char)i;
  //      a[2][i] = "スペード" & (char)i;
    //    a[3][i] = "クローバー" & (char)i;
    }


    // randomで入れ替える。回数を指定する


    // forで表示する繰り返す
    int j;
    for( i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            printf("%s\n", a[i][j]);
        }
    }


    return 0;
}
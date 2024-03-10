#include <stdio.h>

int main() {
    int numData;  // データの個数
    int data[100];  // データを格納する配列、100個分
    int i;

    // データの個数を読み込む
    scanf("%d", &numData);

    // データの個数だけ繰り返してデータを読み込む
    for (i = 0; i < numData; i++) {
        scanf("%d", &data[i]);
    }

    int max = data[0], min = data[0];

    for (i = 0; i < numData; i++) {
        if( min > data[i]) {
            min = data[i];
        }
        if( max < data[i]) {
            max = data[i];
        }
    }

    printf("最小値 = %d 最大値 = %d\n", min, max);

  return 0;
}

#include <stdio.h>

int main() {
    int eng[100], math[100], lang[100];
    int average_eng = 0, average_math = 0, average_lang = 0;
    int numData, i;

    // データの読み込み
    scanf("%d", &numData);

    for (i = 0; i < numData; i++) {
        scanf("%d %d %d", &eng[i], &math[i], &lang[i]);
    }

    // 平均値の算出
    for (i = 0; i < numData; i++) {
        average_eng = average_eng + eng[i];
        average_math = average_math + math[i];
        average_lang = average_lang + lang[i];
    }

    average_eng = average_eng / numData;
    average_math = average_math / numData;
    average_lang = average_lang / numData;

    printf("平均点 英語:%d, 数学:%d, 国語:%d\n", average_eng, average_math, average_lang);

    // 合計点の算出
    int exam_sum;
    for (i = 0; i < numData; i++) {
        exam_sum = eng[i] + math[i] + lang[i];
        printf("%d: %d\n", i, exam_sum);
    }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>     // rand関数の利用
#include <time.h>       // time関数の利用

#define COUNT 5

int input_my_card();
int input_cpu_card();
int judgement_janken(int, int, int *);

int main(void)
{
    int i, mycard, cpucard;
    int result;                 // じゃんけんの結果　0:プレイヤーの勝ち、1：CPUの勝ち、2:あいこ
    int record[2] = { 0, 0};    // じゃんけんの成績配列　0：プレイヤーの勝利数、1：CPUの勝利数

    for( i = 0; i < COUNT; i++) {
        // プレイヤーの入力
        mycard = input_my_card();
        if(mycard < 0 || 2 < mycard) {      // プレイヤーの手が不正のため、CPUの勝利
            judgement_janken(0, 2, *&record);
            continue;
        }

        // CPUの入力
        cpucard = input_cpu_card();

        // じゃんけんの判定
        result = judgement_janken(mycard, cpucard, *&record);

        if(result == 2) {    // あいこの場合、カウントしない
            i -= 1;
        }
    }

    if( record[0] > record[1]){
        printf("あなたの総合勝利です。参りました\n");
    } else if ( record[0] < record[1]){
        printf("わたしの総合勝利です。えっへん！\n");
    } else {
        printf("エラー\n");
    }

    return 0;
}

int input_my_card(){
    int card = 0;

    printf("あなたの手を選んでください(グー0、チョキ1、パー2): ");
    scanf("%d", &card);

    if(card < 0 || 2 < card) {
        printf("そんな手はありません。あなたの負け\n");
    }

    return card;
}

int input_cpu_card(){
    int card = 0;

    srand( time( NULL));            // 乱数を現在時刻で初期化する
    card = rand() % 3;            // 乱数を3で割った余り０，１，２を取得

    switch(card){
        case 0:
            printf("コンピュータはグー\n");
            break;
        case 1:
            printf("コンピュータはチョキ\n");
            break;
        case 2:
        default:
            card = 2;
            printf("コンピュータはパー\n");
    }

    return card;
}

int judgement_janken(int mycard, int cpucard, int *record){
    int result = 1;                 // じゃんけんの結果　0:プレイヤーの勝ち、1：CPUの勝ち、2:あいこ

    switch(mycard){
        case 0:
            switch(cpucard){
                case 0:
                    result = 2;
                    break;
                case 1:
                    result = 0;
                    break;
                case 2:
                default:
                    result = 1;
            }
            break;
        case 1:
            switch(cpucard){
                case 0:
                    result = 1;
                    break;
                case 1:
                    result = 2;
                    break;
                case 2:
                default:
                    result = 0;
            }
            break;
        case 2:
            switch(cpucard){
                case 0:
                    result = 0;
                    break;
                case 1:
                    result = 1;
                    break;
                case 2:
                default:
                    result = 2;
            }
            break;
        default:
            printf("エラー\n");
    }

    switch(result){
        case 0:
            printf("あなたの勝ち\n");
            *record += 1;
            break;
        case 1:
            printf("わたしの勝ち\n");
            *(record +1) += 1;
            break;
        case 2:
            printf("あいこ\n");
            break;
        default:
            printf("エラー\n");
    }

    printf("あなた%d勝、わたし%d勝\n", *record, *(record + 1));

    return result;
}



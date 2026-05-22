// kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 学生の名前と点数を格納する構造体
struct Student
{
    char name[20];
    int score;;
};

int main()
{
    srand((unsigned int)time(NULL));

    /*struct Student students[5] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"David", 88},
        {"Eve", 95}
	};*/
    // 5 人分のデータを構造体配列に格納する
    struct Student students[5] = {
       {"Syudou",   0},
       {"Ryo",     0},
       {"Cave", 0},
       {"Davai",   0},
       {"Eve",     0}
    };
	// ランダムな点数を生成して構造体配列に格納する
    for (int i = 0; i < 5; i++) {
        
        students[i].score = rand() % 101;
    }
	// 学生の点数を表示し、平均点と最高点を計算する
    int total_score = 0;
    int max_score = 0;
    int max_index = 0;

    for (int i = 0; i < 5; i++) {

        printf("%s の点数: %d 点\n", students[i].name, students[i].score);

        total_score += students[i].score;

        if (students[i].score > max_score) {

            max_score = students[i].score;
            max_index = i;
        }
    }
	// 平均スコアを計算
    double average_score = total_score / 5.0;

	// 平均点と最高点の結果を表示
    printf("結果:\n");
    printf("平均点: %.2f\n", average_score);
    printf("最高点: %d 点\n", max_score);

	// 最高点の学生の名前を表示
	printf("最高点を取った学生: %s\n", students[max_index].name);

	return 0;

}

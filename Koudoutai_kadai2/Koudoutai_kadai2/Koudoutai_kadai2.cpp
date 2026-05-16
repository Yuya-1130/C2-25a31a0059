

#include <stdio.h>
// nameとscoreを持つ構造体を定義
struct Stetas{
	char name[10];
	int score;
};
//5人分のデータを構造体配列に格納する
void DispScore(Stetas Charenjer) {
	printf("名前:%c\n", Charenjer.name);
	printf("名前:%d\n", Charenjer.score);
}
int main()
{
	Stetas Charenjer[5] = {
		

	};
	return 0;
}


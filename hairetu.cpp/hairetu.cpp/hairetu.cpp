

#include <stdio.h>

int main()
{
	// 文字の表示
	char s = 'a';
	printf("%c\n", s);

    // 文字列の表示
	//char str[10] = "abcdefghij";   // 最後にヌル文字が追加されるため10文字が入らない

	//char str[10];
	//str[0] = 'a';
	//str[1] = 'b';
	//str[2] = 'c';
	//str[3] = '\0'; // ヌル文字

	//printf("%s\n", str);

	/*char str[10];
	str[0] = 'あ';
	str[1] = 'い';
	str[2] = 'う';
	str[3] = '\0';*/

	char str[10] = "あいう";

	printf("%c\n", str[0]);

	int count[4];
	int hp = 100;

	// count 配列の初期化
	for (int i = 0; i <= 4; i++) {
		count[i] = 0;
	}
	//
	//
	// 敵やアイテムなどいろいろな処理を行う
	//
	//

	// プレイヤーキャラの死亡判定
	if (hp == 0) {

	}
}


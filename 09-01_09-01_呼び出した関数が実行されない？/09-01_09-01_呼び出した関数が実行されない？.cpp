/*入力の確認を行う（問題あり：getchar関数の呼び出しが無視される？）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int ch;
	char name[20];

	printf("名前を入力してください :");
	scanf("%s", name);

	printf("よろしいですか(Y/N) :");

	ch = getchar();
	if (ch == 'Y' || ch == 'y') {
		printf("こんにちは%sさん\n", name);
	}

	return 0;
}
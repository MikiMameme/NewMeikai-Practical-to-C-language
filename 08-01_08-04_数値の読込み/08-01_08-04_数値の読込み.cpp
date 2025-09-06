/*数値を読み込んで表示*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int num;

	while (1) {
		printf("整数値を入力せよ\n(9999と入力すると終了します):");
		scanf("%d", &num);
		if (num == 9999)break;

		printf("あなたは%dと入力しましたね\n", num);
	}

	return 0;
}
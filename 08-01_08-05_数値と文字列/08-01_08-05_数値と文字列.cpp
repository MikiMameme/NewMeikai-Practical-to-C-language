/*数値を文字列として読み込んで表示（atoi関数版）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	char buffer[100];

	while (1) {
		printf("整数値を入力せよ:");
		if (scanf("%s", buffer) == EOF) break;
		if ((num = atoi(buffer)) == 9999) break;

		printf("あなたは%dと入力しましたね\n", num);
	}

	return 0;
}
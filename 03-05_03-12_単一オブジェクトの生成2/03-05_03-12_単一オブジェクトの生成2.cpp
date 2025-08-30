/*動的に生成した整数に値を読み込む(間違い)*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* x;

	x = (int*)calloc(1, sizeof(int));

	if (x == NULL)
		puts("記憶域の確保に失敗しました");
	else{
		printf("整数値を入力してください :");
		/*おかしい？*/
		scanf("%d", &x);
		/*処理系によっては動作しない*/
		printf("あなたは%dと入力しましたね\n", *x);
		free(x);

	}

	return 0;
}
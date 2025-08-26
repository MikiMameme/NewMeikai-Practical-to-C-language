/*単純な制御式をもつif文の利用例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int nx;

	printf("nxの値を入力せよ :");
	scanf("%d", &nx);

	if (nx)
		puts("\aそれは0ではありません");
	else
		puts("それは0です");

	return 0;
}
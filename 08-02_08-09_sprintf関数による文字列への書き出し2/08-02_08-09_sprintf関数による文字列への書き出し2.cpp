/*実数値を指定された桁数の文字列に変換*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int n1, n2;
	double x;
	char buf[256];

	printf("実数値を入力してください :");
	scanf("%lf", &x);

	printf("少なくとも何桁の文字列に変換しますか :");
	scanf("%d", &n1);

	printf("そのうち小数部は何桁ですか :");
	scanf("%d", &n2);

	sprintf(buf, "%*.*f", n1, n2, x);

	printf("変換後の文字列は\"%s\"です\n", buf);

	return 0;
}
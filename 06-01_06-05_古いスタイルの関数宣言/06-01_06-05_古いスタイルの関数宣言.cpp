/*3乗値を求める（古いスタイル）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

extern double pow();

int main(void)
{
	double x;

	printf("実数値を入力せよ :");
	scanf("%lf", &x);

	printf("その数の3乗は%.3fです\n", pow(x, 3.0));

	return 0;
}
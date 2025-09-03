/*2乗値を求める（関数sqrを先頭側に配置）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*2乗値を求める*/
double sqr(double x)
{
	return x * x;
}

int main(void)
{
	double x;

	printf("実数値を入力せよ :");
	scanf("%lf", &x);

	printf("その数の2乗は%.3fです\n", sqr(x));

	return 0;
}
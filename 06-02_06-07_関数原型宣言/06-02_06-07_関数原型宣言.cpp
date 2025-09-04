/*3乗値を求める（原型関数宣言）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double pow(double, double);

int main(void)
{
	double x;

	printf("実数値を入力せよ :");
	scanf("%lf", &x);

	printf("その数の3乗は%.3fです\n", pow(x, 3));

	return 0;
}

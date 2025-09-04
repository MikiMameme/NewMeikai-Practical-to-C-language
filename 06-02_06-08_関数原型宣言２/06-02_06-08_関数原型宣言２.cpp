/*3乗値を求める（標準ヘッダをインクルード）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main(void)
{
	double x;

	printf("実数値を入力せよ :");
	scanf("%lf", &x);

	printf("その数の３乗は%.3fです\n", pow(x, 3));

	return 0;
}
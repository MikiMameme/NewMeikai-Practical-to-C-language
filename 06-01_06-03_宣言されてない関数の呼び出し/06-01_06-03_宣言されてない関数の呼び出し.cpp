/*pow関数を呼び出して3乗値を求める（コンパイルエラーまたは正しい結果が得られない）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	double x;

	printf("実数値を入力せよ :");
	scanf("%lf", &x);
													/*型の不一致で暴走*/
	printf("その数の3乗は%.3fです\n", pow(x, 3.0)); /*Visual Studio → コンパイルエラーで止まる*/

	return 0;
}
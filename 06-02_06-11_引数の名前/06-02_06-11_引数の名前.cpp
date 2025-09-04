/*メインプログラム（関数maxを利用、コンパイルエラーになるため実行不可）*/

#define max 10

#include<stdio.h>
#include "sum.h"

int main(void)
{
	int n;

	do {
		printf("１～ %dの整数値 :", max);
		scanf("%d", &n);
	} while (n < 1 || n > max);

	printf("１～%dの和は%dです\n",
		n, sum(n));

	return 0;
}
/*関数形式マクロmax2を利用するプログラム（見えにくいエラーが潜む、正しく実行できない）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "max2X1.h"

int main(void)
{
	int x, y;

	printf("xの値は :"); scanf("%d", &x);
	printf("yの値は :"); scanf("%d", &y);

	printf("max2(x, y) = %d\n", max2(x, y));

	return 0;
}
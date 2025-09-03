/*整数を読み込んで合計を表示（空文の利用、名札付き文の本体として）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*no個の整数を読み込んで合計値を表示*/
void sumup(int no)
{
	int sum = 0;

	printf("%d個の整数を入力してください\n", no);
	puts("999を入力すると中断します");

	while (no--) {
		int x;
		scanf("%d", &x);
		if (x == 999) goto xyz;
		sum += x;
	}
	printf("合計は%dです\n", sum);
xyz:
	;
}

int main(void)
{ 
	sumup(5);
	return 0;
}
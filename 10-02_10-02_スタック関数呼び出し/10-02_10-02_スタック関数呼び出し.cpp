/*関数呼び出しとスタックを理解するためのプログラム名*/

#include<stdio.h>

void fa(void)
{
	puts("□□□関数fa開始");
	puts("□□□関数fa終了");
}

void fb(void)
{
	puts("□□□関数fb開始");
	puts("□□□関数fb終了");
}

void fc(void)
{
	puts("□□関数fc開始");
	fa();
	fb();
	puts("□□関数fc終了");
}

int main(void)
{
	puts("□main関数開始");
	fc();
	puts("□main関数終了");

	return 0;
}
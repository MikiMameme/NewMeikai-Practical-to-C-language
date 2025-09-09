/*スタックを破壊するプログラム*/

#include<stdio.h>

/*スタックを破壊してしまう関数*/
void func(void)
{
	int i;
	char x[5];

	puts("関数funcの実行中です");
	/*範囲外にも書き込み！*/
	for (i = -2; i < 8; i++)/*VisualStudioでは例外で停止する*/
		x[i] = 0;/*5個は正常、5個は範囲外への危険な書き込み*/
}

int main(void)
{
	puts("関数funcを呼び出します");
	func();
	puts("関数funcから戻ってきました");

	return 0;
}
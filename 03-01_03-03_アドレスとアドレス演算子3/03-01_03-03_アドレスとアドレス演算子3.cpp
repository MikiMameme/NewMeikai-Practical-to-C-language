/*register宣言されたオブジェクトのアドレスは取得できないことを確認*/

#include<stdio.h>

int main(void)
{
	register int x;

	/*Cだとエラー、C++だと正常動作する*/
	printf("xのアドレス = %p\n", &x);

	return 0;
}
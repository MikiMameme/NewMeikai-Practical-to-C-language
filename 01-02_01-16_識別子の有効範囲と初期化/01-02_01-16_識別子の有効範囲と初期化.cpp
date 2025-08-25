/*不定値である自分自身の値で変数を初期化*/

#pragma warning(disable: 4700)

#include<stdio.h>

int x = 1;

int main(void)
{
	int x = x;

	printf("x = %d\n", x);

	return 0;
}
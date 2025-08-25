/*初期化子が与えられてない要素が0で初期化されることを確認*/

#include<stdio.h>

int main(void)
{
	int i;
	int b[3] = { 1 };

	if (b[1] != 0 || b[2] != 0)
		puts("正しく初期化されていません");
	else
		for (i = 0; i < 3; i++)
			printf("b[%d] = %d\n", i, b[i]);

	return 0;
}
/*2次元配列の初期化を確認*/

#include<stdio.h>

int main(void)
{
	int i, j;
	int x[3][2] = { {1, 2},
					{ 3, 4 },
					{ 5, 6 },
	};
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("x[%d][%d] = %d\n", i, j, x[i][j]);

	return 0;
}
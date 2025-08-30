/*2次元配列を動的に生成*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int (*x)[3];
	int n;

	puts("n x 3の2次元配列を確保します");
	printf("nの値は :");
	scanf("%d", &n);

	x =(int (*)[3])calloc(n * 3, sizeof(int));

	if (x == NULL)
		puts("記憶域の確保に失敗しました");
	else {
		int i, j;

		for (i = 0; i < n; i++)
			for (j = 0; j < 3; j++)
				printf("x[%d][%d] = %d\n", i, j, x[i][j]);
		free(x);
	}

	return 0;
}
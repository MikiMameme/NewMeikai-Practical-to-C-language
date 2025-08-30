/*3次元配列を動的に生成*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int (*x)[4][3];
	int n;

	puts("n x 4 x 3の配列を確保します");
	printf("nの値は :");
	scanf("%d", &n);

	x = (int(*)[4][3])calloc(n * 4 * 3, sizeof(int));

	if (x == NULL)
		puts("記憶域の確保に失敗しました");
	else {
		int i, j, k;

		for (i = 0; i < n; i++)
			for (j = 0; j < 4; j++)
				for (k = 0; k < 3; k++)
					printf("x[%d][%d][%d] = %d\n", i, j, k, x[i][j][k]);
		free(x);
	}

	return 0;
}
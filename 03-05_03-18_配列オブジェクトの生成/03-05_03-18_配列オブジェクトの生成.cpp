/*整数配列を動的に生成*/

#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int* x;
	int i, nx;

	printf("生成する配列の要素数 :");
	scanf("%d", &nx);

	x =(int*) calloc(nx, sizeof(int));

	if (x == NULL)
		puts("記憶域の確保に失敗しました");
	else {
		for (i = 0; i < nx; i++)
			x[i] = i;

		for (i = 0; i < nx; i++)
			printf("x[%d] = %d\n", i, x[i]);

		free(x);
	}

	return 0;
}
/*同名の関数とマクロとを使い分けるプログラム例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*マクロ版*/
#define max2(a, b) ((a) > (b) ? (a) : (b))

/*関数版*/
int(max2)(int a, int b)
{
	puts("関数版max2が呼び出されました");
	return a > b ? a : b;
}

int main(void)
{
	int x, y;

	printf("xの値は :"); scanf("%d", &x);
	printf("yの値は :"); scanf("%d", &y);

	printf("max2(x, y) = %d\n\n", max2(x, y));

	printf("(max2)(x, y) = %d\n", (max2)(x, y));

	return 0;
}
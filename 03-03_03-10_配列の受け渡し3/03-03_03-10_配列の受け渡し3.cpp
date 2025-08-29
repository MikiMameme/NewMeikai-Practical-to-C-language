/*配列の全要素の値を合計する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*要素数nの配列vの全要素の合計値を返す*/
int sumup(int v[], int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[5];
	int na = sizeof(a) / sizeof(a[0]);

	printf("%d個の整数を入力せよ\n", na);
	for (i = 0; i < na; i++) {
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("合計 = %d\n", sumup(a, na));

	return 0;
}
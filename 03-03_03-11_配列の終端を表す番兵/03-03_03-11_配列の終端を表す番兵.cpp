/*配列の全要素を合計する（要素数をやり取りしない）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define INVALID -1

/*ばんお英INVALIDより前の要素を合計*/
int sumup(int v[])
{
	int i;
	int sum = 0;

	for(i = 0; v[i] != INVALID; i++)
		sum += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[128];
	int na = sizeof(a) / sizeof(a[0]);

	printf("%d個の非負の整数を入力せよ（終了は-1）\n", na - 1);
	for (i = 0; i < na - 1; i++) {
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
		if (a[i] == INVALID) break;
	}
	if (i == na - 1)
		a[i] = INVALID;

	printf("合計 = %d\n", sumup(a));

	return 0;
}
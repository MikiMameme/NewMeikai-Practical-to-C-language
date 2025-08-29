/*配列の全要素の値を合計する（配列へのポインタ版）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*配列vの全要素の合計値を返す（配列へのポインタ）*/
int sumup(int (*v)[5])
{
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++)
		sum += (*v)[i];
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
	printf("合計 = %d\n", sumup(&a));

	return 0;
}
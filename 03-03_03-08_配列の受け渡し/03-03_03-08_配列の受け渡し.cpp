/*配列の全要素の値を求める（間違い,コンパイルエラーになるため実行不可）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*配列vの全要素の合計値を返す（間違い）*/
int sumup(int v[n])
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum  += v[i];
	return sum;
}

int main(void)
{
	int i;
	int a[5];
	int na = sizeof(a) / sizeof(a[0]);

	printf("%d個の整数を入力せよ", na);
	for (i = 0; i < na; i++) {
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("合計＝%d\n", sumup(a));
	return 0;
}
/*2次元配列の各行の合計を求めて表示（間接演算子版）*/

#include<stdio.h>

/*2次元配列vの各行の合計を求めて表示*/
void sum(int (*v)[3], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		int sum = 0;

		for (j = 0; j < 3; j++)
			sum += (*v)[j];
		printf("%d行の合計 = %d\n", i, sum);
		v++;
	}
}

int main(void)
{
	int goukei;
	int a[][3] = { {11, 12, 13},
				{14, 15, 16},
				{17, 18, 19},
				{20, 21, 22},
	};

	int na = sizeof(a) / sizeof(a[0]);
	sum(a, na);

	return 0;
}
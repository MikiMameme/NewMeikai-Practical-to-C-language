/*型が与えられずに宣言されたものがint型になることを確認*/

#include<stdio.h>

func(a, b) /*C89までは「暗黙のint型宣言」が許されてたが、C99以降は廃止された*/
{			/*つまりこの書き方は許されないことに注意*/
	struct {
		x;
		y;
	}z;

	z.x = a;
	z.y = b;

	printf("z.x = %d\n", z.x);
	printf("z.y = %d\n", z.y);

	return z.x + z.y;
}

int main(void)
{
	int a = 1;
	int b = 2;

	printf("func(a, b) = %d\n", func(a, b));

	return 0;
}
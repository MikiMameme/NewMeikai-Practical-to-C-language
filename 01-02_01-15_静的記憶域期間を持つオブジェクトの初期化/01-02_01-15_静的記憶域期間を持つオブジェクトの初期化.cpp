/*オブジェクトとの記憶域期間（静的・動的）と初期化*/

#include<stdio.h>

int ft = 0;

void func(void)
{
	int at = 0;
	static int st = 0;

	ft++;
	at++;
	st++;
	printf("ft = %d at = %d st = %d\n", ft, at, st);
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
		func();

	return 0;
}
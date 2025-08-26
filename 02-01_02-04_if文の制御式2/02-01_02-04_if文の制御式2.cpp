/*制御式が代入式となっているif文の例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int a, b;

	printf("aの値は :"); scanf("%d", &a);
	printf("bの値は :"); scanf("%d", &b);

	if (a = b)
		printf("■ a = %d\n■ b = %d\n", a, b);
	else
		printf("□ a = %d\n□ b = %d\n", a, b);

	return 0;
}
/*『《配列による文字列》の配列』と『《ポインタによる文字列》の配列』*/

#include<stdio.h>

int main(void)
{
	int i;
	char a[][5] = { "LISP", "C", "Ada" };
	const char *p[] = { "PAUL", "X", "MAC" };

	for (i = 0; i < 3; i++)
		printf("a[%d] = %s\n", i, a[i]);

	for (i = 0; i < 3; i++)
		printf("p[%d] = %s\n", i, p[i]);

	return 0;
}
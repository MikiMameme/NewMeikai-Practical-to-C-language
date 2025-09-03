/*文字列を空文字列にする*/

#include<stdio.h>

int main(void)
{
	char str[4];

	str[0] = '\0';

	printf("str = \"%s\"\n", str);

	return 0;
}
/*ナル文字を代入して文字列を空にする*/

#include<stdio.h>

int main(void)
{
	char str[4] = "ABC";

	str[0] = '\0';

	printf("str = \"%s\"\n", str);

	return 0;
}
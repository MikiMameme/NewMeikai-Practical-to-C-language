/*strcpy関数によって文字列を空にする*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[4] = "ABC";

	strcpy(str, " ");

	printf("str = \"%s\"\n", str);

	return 0;
}
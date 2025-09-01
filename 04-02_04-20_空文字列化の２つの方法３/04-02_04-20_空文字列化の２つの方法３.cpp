/*文字列の操作*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[8] = "";    printf("str = \"%s\"\n", str);
	strcpy(str, "ABCD"); printf("str = \"%s\"\n", str);
	strcpy(str, "");     printf("str = \"%s\"\n", str);
	str[0] = '1';        printf("str = \"%s\"\n", str);
	str[1] = '2';        printf("str = \"%s\"\n", str);

	return 0;
}
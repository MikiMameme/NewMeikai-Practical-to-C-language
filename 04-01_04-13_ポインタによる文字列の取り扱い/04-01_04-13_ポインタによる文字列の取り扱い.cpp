/*《配列による文字列》と《ポインタによる文字列》*/

#include<stdio.h>

int main(void)
{
	char ary[] = "ABC";
	const char *ptr = "XYZ";

	printf("ary = %s\n", ary);
	printf("ptr = %s\n", ptr);

	return 0;
}
/*文字列リテラルを評価した値を表示*/

#include<stdio.h>

int main(void)
{
	const char* ptr = "ABCD";

	printf("ptr = %s\n", ptr);
	printf("ptr = %p\n", ptr);
	printf("*ptr = %c\n", *ptr);

	return 0;
}
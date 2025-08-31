/*文字列リテラルの大きさを表示*/

#include<stdio.h>

int main(void)
{
	printf("sizeof(\"ABC\") = %u\n", (unsigned)sizeof("ABC"));
	printf("sizeof(\"UVW\\0XYZ\") = %u\n", (unsigned)sizeof("UVW\0XYZ"));

	return 0;
}
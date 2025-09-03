/*文字列のコピー（空文の利用、繰り返し文の本体として）*/

#include<stdio.h>

/*文字列sをdにコピー*/
char* strcopy(char* d, const char* s)
{
	char* p = d;
	while (*d++ = *s++)
		;
	return p;
}

int main(void)
{
	char sx[20] = "ABC";
	char sy[20] = " ";

	strcopy(sy, sx);

	printf("文字列sx = %s\n", sx);
	printf("文字列sy = %s\n", sy);

	return 0;
}
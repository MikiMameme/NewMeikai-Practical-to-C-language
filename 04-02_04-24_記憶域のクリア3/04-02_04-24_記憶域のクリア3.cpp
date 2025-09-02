/*文字列strにナル文字をno個埋める（修正版）*/

#include<stdio.h>
#include<string.h>

void clear_string(char* str, int no)
{
	memset(str, '\0', no);
}

int main(void)
{
	int i;
	char s[10] = "ABCDEFGHI";

	clear_string(s, sizeof(s));

	for (i = 0; i < sizeof(s); i++)

		printf("s[%d] = %d\n", i, s[i]);

	return 0;
}
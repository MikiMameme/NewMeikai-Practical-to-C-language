/*文字列にナル文字を埋める（間違い）*/

#include<stdio.h>
#include<string.h>

/*文字列strにナル文字を埋める（間違い）*/
void clear_string(char* str)
{
	memset(str, '\0', sizeof(str));
}

int main(void)
{
	int i;
	char s[10] = "ABCDEFGHI";

	clear_string(s);

	for(i = 0; i < sizeof(s); i++)

	printf("s[%d] = %d\n", i, s[i]);

		return 0;
}
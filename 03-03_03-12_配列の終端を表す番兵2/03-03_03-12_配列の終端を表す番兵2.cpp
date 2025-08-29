/*文字列を表示する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*文字列を1文字ずつ走査して表示*/
void putstr(const char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
}

int main(void)
{
	char str[128];

	printf("文字列を入力せよ:");
	scanf("%s", str);

	putstr(str);
	putchar('\n');

	return 0;
}
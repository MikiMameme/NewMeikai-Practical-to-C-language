/*1文字入出力ライブラリの利用例*/

#include<stdio.h>
#include<ctype.h>

int getchr(void);
int ungetchr(int ch);

/*整数を読み込んで2倍の値を表示*/
int getnum(void)
{
	int c = 0;
	int x = 0;
	int ch;

	while ((ch = getchar()) != EOF && isdigit(ch)) {
		x = x * 10 + ch - '0';
		c++;
	}

	if (ch != EOF)
		ungetchr(ch);
	if (c)printf("%d\n", x * 2);

	return ch;
}

/*文字を読み込んでそのまま表示*/
int getnnum(void)
{
	int ch;

	while ((ch = getchr()) != EOF && ! isdigit(ch))
		putchar(ch);
	if (ch != EOF)
		ungetchr(ch);
	putchar('\n');

	return ch;
}

int main(void)
{
	while (getnum() != EOF)
		if (getnnum() == EOF)
			break;

	return 0;
}
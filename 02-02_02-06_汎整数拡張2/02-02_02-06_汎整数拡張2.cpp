/*signed charとintの演算*/

#include<stdio.h>
#include<limits.h>

int main(void)
{
	int x;
	signed char ch = CHAR_MAX;

	printf("chの値は%dです\n", ch);
	x = ch + 1;

	printf("\nx = ch + 1;\n");
	printf("xの値は%dです\n", x);
	x = ++ch;

	printf("\nx = ++ch;\n");
	printf("xの値は%dです\n", x);

	return 0;

}
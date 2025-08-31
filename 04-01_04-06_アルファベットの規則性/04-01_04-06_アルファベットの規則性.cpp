/*文字定数の大きさを表示*/

#include<stdio.h>

int main(void)
{
	printf("sizeof(char) = %u\n", (unsigned)sizeof(char));
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof('A') = %u\n", (unsigned)sizeof('A'));

	return 0;
}
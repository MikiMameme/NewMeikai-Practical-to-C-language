/*符号付き整数と符号なし整数の比較*/

#include<stdio.h>

int main(void)
{
	int sdata = -1;
	unsigned udata = 1;

	printf("sdata < udata すなわち -1 < 1U は ");
	if (sdata < udata)
		puts("真");
	else
		puts("偽");

	printf("(unsigned)sdata < udata すなわち (unsigned)-1 < 1Uは ");
	if ((unsigned)sdata < udata)
		puts("真");
	else
		puts("偽");

	return 0;
}
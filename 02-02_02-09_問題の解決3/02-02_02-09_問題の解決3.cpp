/*符号付き整数と符号なし整数の比較（条件演算子を利用）*/

#include<stdio.h>

int main(void)
{
	int sdata      = -1;
	unsigned udata = 1;

	printf("sdata < udata すなわち -1 < 1U は%s\n",
		(sdata < udata) ? "真" : "偽");

	printf("(unsigned)sdata < udata すなわち (unsigned)-1 < 1U は %s\n",
		((unsigned)sdata < udata) ? "真" : "偽");

	return 0;
}
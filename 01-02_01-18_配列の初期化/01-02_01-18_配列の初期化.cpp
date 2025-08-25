/*自動記憶域期間をもつ配列を初期化*/

#include<stdio.h>

int vx[3] = { 1, 2, 3 };

int main(void)
{
	int i;

	/*自動：古いCでは不可*/
	int ma[3] = { 1, 2, 3 };

	/*静的：古いCでも可*/
	static int ms[3] = { 1, 2, 3 };

	for (i = 0; i < 3; i++)
		printf("vx[%d] = %d ma[%d] = %d  ms[%d] = %d\n",
			i, vx[i], i,  ma[i], i, ms[i]);

	return 0;
}
/*-1をunsigned int型に変換した結果がUINT_MAXになることを確認*/

#include<stdio.h>
#include<limits.h>

int main(void)
{
	printf("(unsigned)-1 = %u\n", (unsigned)-1);
	printf("UINT_MAX     = %u\n", UINT_MAX);

	return 0;
}
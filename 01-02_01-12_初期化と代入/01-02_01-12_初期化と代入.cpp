/*{}で囲んだ初期化子によって単一のオブジェクトを初期化*/

#include<stdio.h>

int main(void)
{
	int n = { 5 };
	printf("n = %d\n", n);
	return 0;
}
/*オブジェクトのアドレスを表示*/

#include<stdio.h>

int main(void)
{
	int x;
	int y;
	long z;

	printf("xのアドレス=%p\n", &x);
	printf("yのアドレス=%p\n", &y);
	printf("zのアドレス=%p\n", &z);

	return 0;
}
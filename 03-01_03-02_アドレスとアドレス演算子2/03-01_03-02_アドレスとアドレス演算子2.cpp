/*配列内の要素のアドレスを表示*/

#include<stdio.h>

int main(void)
{
	int a[5];

	printf("a[0]のアドレス=%p\n", &a[0]);
	printf("a[1]のアドレス=%p\n", &a[1]);
	printf("a[2]のアドレス=%p\n", &a[2]);
	printf("a[3]のアドレス=%p\n", &a[3]);
	printf("a[4]のアドレス=%p\n", &a[4]);

	return 0;
}
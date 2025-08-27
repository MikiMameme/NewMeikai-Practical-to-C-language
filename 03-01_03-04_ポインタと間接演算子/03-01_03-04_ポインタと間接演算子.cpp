/*ポインタを通じてオブジェクトの値を間接的に変更*/

#include<stdio.h>

int main(void)
{
	int x = 5;
	int y = 3;
	int *ptr;

	ptr = &x;
	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);
	printf("*ptr = %d\n\n", *ptr);

	ptr = &y;
	*ptr = 4;

	printf("x    = %d\n", x);
	printf("y    = %d\n", y);
	printf("ptr  = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);

	return 0;
}
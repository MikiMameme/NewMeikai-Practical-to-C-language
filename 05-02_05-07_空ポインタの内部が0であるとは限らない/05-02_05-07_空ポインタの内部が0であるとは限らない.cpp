/*空ポインタを整数にした値を表示*/

#include<stdio.h>

int main(void)
{
	printf("空ポインタの中身は%luです\n", (unsigned long)(void*)NULL);

	return 0;
}
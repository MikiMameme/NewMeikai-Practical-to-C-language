/*サークルの人数の増減*/

#include<stdio.h>

/*人数増加*/
void increment(int *no)
{
	++*no;
}

/*人数減少*/
void decrement(int *no)
{
	--*no;
}

int main(void)
{
	int x = 5;
	int y = 3;

	increment(&x);
	decrement(&y);

	printf("サークルxの所属人数 = %d\n", x);
	printf("サークルyの所属人数 = %d\n", y);

	return 0;
}
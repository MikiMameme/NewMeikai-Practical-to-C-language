/*共用体の初期化*/

#include<stdio.h>

int main(void)
{
	union uxy {
		int x;
		double y;
	};

	union uxy s = { 5 };
	union uxy t = s;

	printf("s.x = %d\n", s.x);
	printf("s.y = %f\n", s.y);
	printf("t.x = %d\n", t.x);
	printf("t.y = %f\n", t.y);

	return 0;
}
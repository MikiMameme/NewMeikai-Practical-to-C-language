/*共用体への値の代入と表示*/

#include<stdio.h>

int main(void)
{
	union uxy {
		int x;
		double y;
	}u;

	u.x = 1;
	printf("s.x = %d\n", u.x);
	printf("s.y = %f\n", u.y);

	return 0;
}
/*構造体オブジェクトの初期化（初期化子不足のメンバは０で初期化される）*/

#include<stdio.h>

int main(void)
{
	struct xy {
		int x;
		double y;
	};
	struct xy s = { 1 };
	struct xy t = s;

	printf("s.x = %d\n", s.x);
	printf("s.y = %f\n", s.y);
	printf("t.x = %d\n", t.x);
	printf("t.y = %f\n", t.y);

	return 0;

}
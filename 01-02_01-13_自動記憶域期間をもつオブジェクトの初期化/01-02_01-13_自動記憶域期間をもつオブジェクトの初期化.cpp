/*自動記憶域期間をもつオブジェクトの初期化*/

#include<stdio.h>
#include<math.h>

void func(int no)
{
	register int i;
	int x = 100;

	printf("x = %d\n", x);

	for (i = 0; i < no; i++) {
		double x = sin((double)i / no);
		printf("x = %f\n", x);
	}
	printf("x = %d\n", x);
}

int main(void)
{
	func(10);

	return 0;
}
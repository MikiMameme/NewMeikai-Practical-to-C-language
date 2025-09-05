/*構造体の大きさを表示*/

#include<stdio.h>

int main(void)
{
	struct test {
		char c1;
		int nx;
		char c2;
	};

	printf("構造体testの全体の大きさ=%u\n", (unsigned)sizeof(struct test));
	printf("構造体testのメンバの大きさの合計=%u\n",
		(unsigned)(sizeof(char) + sizeof(int) + sizeof(char)));

	return 0;
}
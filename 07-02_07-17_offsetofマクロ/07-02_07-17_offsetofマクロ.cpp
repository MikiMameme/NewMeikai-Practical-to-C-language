/*構造体メンバのオフセットを表示する*/

#include<stdio.h>
#include<stddef.h>

struct test {
	char c1;
	int nx;
	char c2;
};

int main(void)
{
	printf("c1のオフセット=%u\n", (unsigned)offsetof(struct test, c1));
	printf("nxのオフセット=%u\n", (unsigned)offsetof(struct test, nx));
	printf("c2のオフセット=%u\n", (unsigned)offsetof(struct test, c2));

	return 0;
}
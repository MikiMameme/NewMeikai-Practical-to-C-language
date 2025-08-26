/*関係式および等価式と評価した値を表示*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int nx, ny;

	printf("nxの値: "); scanf("%d", &nx);
	printf("nyの値: "); scanf("%d", &ny);

	printf("nx < ny  : %d\n", nx < ny);
	printf("nx <= ny : %d\n", nx <= ny);
	printf("nx > ny  : %d\n", nx > ny);
	printf("nx >= ny : %d\n", nx >= ny);
	printf("nx == ny : %d\n", nx == ny);
	printf("nx != ny : %d\n", nx != ny);

	return 0;
}
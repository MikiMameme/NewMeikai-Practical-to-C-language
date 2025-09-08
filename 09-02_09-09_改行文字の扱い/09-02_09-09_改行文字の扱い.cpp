/*バイナリファイルをテキストファイルとして読み取る*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 10

int main(void)
{
	FILE* fp;
	int i, x, y;
	int a[MAX];

	if ((fp = fopen("TEMP", "r")) != NULL) {
		fread(a, sizeof(int), MAX, fp);
		fread(&x, sizeof(int), 1, fp);
		fread(&y, sizeof(int), 1, fp);

		fclose(fp);

		for (i = 0; i < MAX; i++)
			printf("a[%d] = %d\n", i, a[i]);
		printf("x = %d\n", x);
		printf("y = %d\n", y);
	}

	return 0;
}
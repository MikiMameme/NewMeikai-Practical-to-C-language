/*バイナリファイルの入出力例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 10

int main(void)
{
	FILE* fp;
	int i;
	int x = 2573;
	int y = 12609;
	int a[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };

	if ((fp = fopen("TEMP", "wb")) != NULL) {

		fwrite(a, sizeof(int), MAX, fp);
		fwrite(&x, sizeof(int), 1, fp);
		fwrite(&y, sizeof(int), 1, fp);
		fclose(fp);

		x = y = 0;
		for (i = 0; i < MAX; i++)
			a[i] = 0;

		if ((fp = fopen("TEMP", "rb")) != NULL) {
			fread(a, sizeof(int), MAX, fp);
			fread(&x, sizeof(int), 1, fp);
			fread(&y, sizeof(int), 1, fp);
			fclose(fp);

			for (i = 0; i < MAX; i++)
				printf("a[%d] = %d\n", i, a[i]);
			printf("x = %d\n", x);
			printf("y = %d\n", y);
		}
	}
	return 0;
}
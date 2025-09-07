/*文字列"No.1","No.2"...と作成する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int i;
	char ns[20][6];

	for (i = 0; i < 20; i++)
		sprintf(ns[i], "No.%02d", i + 1);

	for (i = 0; i < 20; i++)
		printf("%s\n", ns[i]);

	return 0;
}
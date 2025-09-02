/*読み込んだ文字列の複製を動的に生成する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char st[128];
	char *pt;

	printf("文字列strを入力してください");
	scanf("%s", st);

	pt = (char*)malloc(strlen(st) + 1);

	if (pt) {
		strcpy(pt, st);
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);
	}

	return 0;
}
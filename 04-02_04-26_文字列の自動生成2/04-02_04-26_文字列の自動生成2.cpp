/*読み込んだ文字列の複製を動的に複製する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*文字列sの複製を生成して返却*/
char* strdmp(const char* s)
{
	char* p = (char*)malloc(strlen(s) + 1);
	return(p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	char st[128];
	char* pt;

	printf("文字列stを入力してください:");
	scanf("%s", st);

	if (pt = strdmp(st)) {
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);
	}

	return 0;
}
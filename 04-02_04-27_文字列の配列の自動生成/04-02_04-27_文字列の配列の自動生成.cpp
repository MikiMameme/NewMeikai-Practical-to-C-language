/*文字列の配列を動的に生成する*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*文字列sの複製を生成して返却*/
char* strdmp(const char* s)
{
	char* p =(char*) malloc(strlen(s) + 1);
	return(p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	int i;
	char* p[4];

	for (i = 0; i < 4; i++) {
		char temp[128];

		printf("文字列:");
		scanf("%s", temp);

		p[i] = strdmp(temp);
	}

	for (i = 0; i < 4; i++)
		printf("p[%d] = %s\n", i, p[i] ? p[i] : "NULL");

	for (i = 0; i < 4; i++)
		free(p[i]);

	return 0;
}
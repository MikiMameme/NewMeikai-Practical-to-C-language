/*単語をファイルから読み込んで表示する（改良版）*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<ctype.h>

#define Q_NO 3

FILE* fp;

/*初期処理*/
int initialize(void)
{
	fp = fopen("DATA", "r");
	return(fp == NULL) ? 0 : 1;
}

/*終了処理*/
void ending(void)
{
	fclose(fp);
}

/*メイン関数*/
int main(void)
{
	if (initialize()) {
		int q, ch;
		char qus[20];
		char ans[20];

		for (q = 0; q < Q_NO; q++) {
			int i;

			if ((ch = fgetc(fp)) == EOF) goto ending;

			for (i = 0; !(isspace(ch)); i++) {
				qus[i] = ch;
				ch = fgetc(fp);
			}
			qus[i] = '\0';

			ch = fgetc(fp);
			for (i = 0; !(isspace(ch)); i++){
				ans[i] = ch;
				ch = fgetc(fp);
			}
			ans[i] = '\0';
			printf("問題=%s 解答=%s\n", qus, ans);
		}
	ending:
		ending();
	}
	return 0;
}
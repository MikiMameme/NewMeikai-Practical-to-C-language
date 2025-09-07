/*日付を読み込んで表示*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

/*日付を表す構造体*/
typedef struct {
	int y;
	int m;
	int d;
}Date;

/*日付を読み込む*/
int fgetdate(FILE* fp, Date* d)
{
	const char* month[] = {
		"", "January", "February", "March", "April",
		"May", "June", "July", "August", "September",
		"October", "November", "December",
	};
	char buf[256], mbuf[16];

	d->y = d->m = d->d = 0;

	if (fgets(buf, sizeof(buf), fp) != NULL) {
		if (sscanf(buf, "%d/%d/%d", &d->y, &d->m, &d->d) == 3)
			return 1;
		else if (sscanf(buf, "%d-%d-%d", &d->y, &d->m, &d->d) == 3)
			return 1;
		else if (sscanf(buf, "%d%s%d", &d->d, mbuf, &d->y) == 3) {
			int i;
			for(i = 1; i <= 12; i++)
				if (strncmp(month[i], mbuf, 3) == 0) {
					d->m = i;
					return 1;
				}
		}
	}
	return 0;
}

int main(void)
{
	Date date;

	puts("日付を入力してください");

	while (fgetdate(stdin, &date))
		printf("日付:%d-%d-%d\n\n", date.y, date.m, date.d);

	return 0;
}
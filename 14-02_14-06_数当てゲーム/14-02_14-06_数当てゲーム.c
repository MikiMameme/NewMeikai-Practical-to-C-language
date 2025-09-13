/*数当てゲーム*/

#define _CRT_SECURE_NO_WARNINGS

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "display.h"

int main(void)
{
	int no;
	int ans;
	const int max_stage = 10;
	int remain = max_stage;

	srand(time(NULL));
	ans = rand() % 1000;

	printf("０～９９９までの整数を当ててください\n\n");

	do {
		color(BRIGHT_WHITE);
		printf("残り%d回、いくつかな :", remain);
		scanf("%d", &no);
		remain--;

		if (no > ans) {
			color(BRIGHT_CYAN);
			printf("もっと小さいよ\n");
		}
		else if (no < ans) {
			color(BRIGHT_GREEN);
			printf("\aもっと大きいよ\n");
		}
	} while (no != ans && remain > 0);

	if (no != ans) {
		color(BRIGHT_RED);
		printf("\a残念、正解は%dでした\n", ans);
	}
	else {
		color(BRIGHT_CYAN);
		printf("正解です\n");
		printf("%d回で当たりましたね\n", max_stage - remain);
	}

	color(WHITE);

	return 0;
}
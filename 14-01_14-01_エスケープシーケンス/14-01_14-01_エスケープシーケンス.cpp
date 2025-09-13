/*エスケープシーケンスによる画面制御*/

#include<stdio.h>

enum {
	BLACK, BLUE, RED, GREEN, MAGENTA, CYAN, YELLOW, WHITE,
	GRAY, BRIGHT_BLUE, BRIGHT_RED, BRIGHT_GREEN, BRIGHT_MAGENTA,
	BRIGHT_CYAN, BRIGHT_YELLOW, BRIGHT
};

/*画面消去*/
void cls(void)
{
	printf("\x1B[2J");
}

/*カーソル位置を(x,y)に設定*/
void locate(int x, int y)
{
	printf("\x1B[%d;%dH", y, x);
}

/*文字色をfgに背景色をbgに設定*/
void colorx(int fg, int bg)
{
	int col[] = { 30, 34, 31, 32, 35, 36, 33, 37 };

	printf("\x1B[0;");
	if (fg > WHITE)
		printf("1;");
	printf("%d;%dm", col[fg % 8], col[bg % 8] + 10);
}

/*文字色をcolに設定*/
void color(int col)
{
	colorx(col, BLACK);
}

int main(void)
{
	cls();

	locate(3, 2); color(WHITE); printf("漢字");
	locate(3, 4); color(BLUE); printf("日本語");
	locate(3, 6); colorx(BLACK, BLUE); printf("いろはにほへと");
	locate(3, 8); colorx(BLUE, WHITE); printf("あいうえお");
	color(WHITE);

	return 0;
}
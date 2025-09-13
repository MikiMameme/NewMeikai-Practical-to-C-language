/*画面制御ライブラリ（エスケープシーケンス）display.h*/

#ifndef __DISPLAY
#define __DISPLAY

enum {
	BLACK, 
	BLUE, 
	RED, 
	GREEN, 
	MAGENTA, 
	CYAN, 
	YELLOW, 
	WHITE,
	GRAY, 
	BRIGHT_BLUE, 
	BRIGHT_RED, 
	BRIGHT_GREEN, 
	BRIGHT_MAGENTA,
	BRIGHT_CYAN, 
	BRIGHT_YELLOW, 
	BRIGHT_WHITE
};

void cls(void);

void locate(int __x, int __y);

void colorx(int __fg, int __bg);

void clor(int __col);

#endif
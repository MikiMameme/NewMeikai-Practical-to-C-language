/*《実現ファイル》ライブラリungetchr*/

#include<stdio.h>
#include "_getchr.h"
#include "getchr.h"

int ungetchr(int ch)
{
	if (__buf_no >= __BUFSIZE)
		return EOF;
	else {
		__buf_no++;
		__buffer[__rear++] = ch;
		if(__rear == __BUFSIZE)
		__rear = 0;
		return ch;
	}
}
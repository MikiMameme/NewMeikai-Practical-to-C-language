/*《実現ファイル》ライブラリgetchr*/

#include<stdio.h>
#include "_getchr.h"
#include "getchr.h"

char __buffer[__BUFSIZE];
int __buf_no = 0;
int __front = 0;
int __rear = 0;

int getchr(void)
{
	if (__buf_no <= 0)
		return getchar();
	else {
		int temp;

		__buf_no--;
		temp = __buffer[__front++];
		if (__front == __BUFSIZE)
			__front = 0;
		return temp;
	}
}
/*1�������o�̓��C�u�����i��P�Łj*/

#include<stdio.h>

#define BUFSIZE 256

char buffer[BUFSIZE];
int buf_no = 0;
int front = 0;
int rear = 0;

/*�P�������o��*/
int getchr(void)
{
	if (buf_no <= 0)
		return getchar();
	else {
		int temp;

		buf_no--;
		temp = buffer[front++];
		if (front == BUFSIZE)
			front = 0;
		return temp;
	}
}

/*�P���������߂�*/
int ungetchr(int ch)
{
	if (buf_no >= BUFSIZE)
		return EOF;
	else {
		buf_no++;
		buffer[rear++] = ch;
		if (rear == BUFSIZE)
			rear = 0;

		return ch;
	}
}

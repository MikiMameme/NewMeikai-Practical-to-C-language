/*getchri‘æ3”Åj*/

#include<stdio.h>

#define BUFSIZE 256

char buffer[BUFSIZE];
int buf_no = 0;
int front = 0;
int rear = 0;

/*1•¶šæ‚èo‚·*/
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
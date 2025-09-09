/*1文字入出力ライブラリ（第１版）*/

#include<stdio.h>

#define BUFSIZE 256

char buffer[BUFSIZE];
int buf_no = 0;
int front = 0;
int rear = 0;

/*１文字取り出す*/
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

/*１文字押し戻す*/
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


/*テスト用のmain関数*/
int main(void)
{
	int ch;
	printf("文字を入力してください（Ctrl+Zで終了）:\n");

	while ((ch = getchr()) != EOF) {
		printf("読み取った文字: %c\n", ch);

		// 'a' を入力したら、'A' を押し戻してみるテスト
		if (ch == 'a') {
			ungetchr('A');
			printf("'A'を押し戻しました\n");
		}
	}
	return 0;
}
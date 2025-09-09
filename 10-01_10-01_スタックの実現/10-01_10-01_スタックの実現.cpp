/*スタックの実現例*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*スタックを実現する構造体*/
typedef struct {
	int max;
	int ptr;
	int* stk;
}Stack;

/*スタックの準備・初期化*/
int StackAlloc(Stack* s, int max)
{
	s->ptr = 0;
	if ((s->stk =(int*) calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

/*スタックの後始末*/
void StackFree(Stack* s)
{
	if (s->stk != NULL) {
		free(s->stk);
		s->max = s->ptr = 0;
	}
}

/*スタックにデータをプッシュ*/
int StackPush(Stack* s, int x)
{
	if (s->ptr >= s->max)
		return -1;
	s->stk[s->ptr++] = x;
	return 0;
}

/*スタックからデータをポップ*/
int StackPop(Stack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}

/*スタックからデータをピーク*/
int StackPeek(const Stack* s, int* x)
{
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[s->ptr - 1];
	return 0;
}

/*スタックの容量*/
int StackSize(const Stack* s)
{
	return s->max;
}

/*スタックに積まれているデータ数*/
int StackNo(const Stack* s)
{
	return s->ptr;
}

/*スタックは空か*/
int StackIsEmpty(const Stack* s)
{
	return s->ptr <= 0;
}

/*スタックは満杯か*/
int StackIsFull(const Stack* s)
{
	return s->ptr >= s->max;
}

/*スタックを空にする*/
void StackClear(Stack* s)
{
	s->ptr = 0;
}

int main(void)
{
	Stack stk;

	if (StackAlloc(&stk, 100) == -1) {
		puts("スタックの確保に失敗しました");
		return 1;
	}
	while (1) {
		int m, x;

		printf("現在のデータ数:%d/%d\n", StackNo(&stk), StackSize(&stk));
		printf("(1) プッシュ (2) ポップ (0) 終了 :");
		scanf("%d", &m);
		if (m == 0) break;

		switch (m) {
		case 1: printf("データ :"); scanf("%d", &x);
			if (StackPush(&stk, x) == -1)
				puts("プッシュできません");
			break;

		case 2: if (StackPop(&stk, &x) == -1)
			puts("ポップできません");
			  else
			printf("ポップしたデータは%dです\n", x);
			break;

		}
	}
	StackFree(&stk);

	return 0;
}
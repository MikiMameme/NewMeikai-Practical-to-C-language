/*2つのポインタを交換*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

/*int型の整数を交換（aが指す整数とbが指す整数を交換）*/
void swap_int(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*int*型のポインタを交換（aが指すポインタとbが指すポインタを交換）*/
void swap_intptr(int** a, int** b)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x, y;
	int* p1 = &x;
	int* p2 = &y;

	puts("p1はxを指してp2はyを指しています");
	printf("整数x :"); scanf("%d", &x);
	printf("整数y :"); scanf("%d", &y);

	swap_int(&x, &y);

	puts("整数xと整数yの値を交換しました");
	printf("p1が指す値は%dです\n", *p1);
	printf("p2が指す値は%dです\n", *p2);

	swap_intptr(&p1, &p2);

	puts("ポインタp1とp2の値を交換しました");
	printf("p1が指す値は%dです\n", *p1);
	printf("p2が指す値は%dです\n", *p2);

	return 0;

}
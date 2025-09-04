/*関数呼び出しと引数の変換（古いスタイル、VisualStudioでコンパイルエラーになる）*/

#include<stdio.h>

void iprint(), lprint(), fprint(), dprint();

main()
{
	int a = 10000;
	long b = 40000;
	float c = 50000;
	double d = 60000;

	puts("-- a(int)--");
	iprint(a);
	lprint(a);

	puts("\n--b(long)--");
	iprint(b);
	lprint(b);

	puts("\n--c(float)--");
	fprint(c);
	dprint(c);

	puts("\n--d(double)--");
	fprint(d);
	dprint(d);

}

void iprint(x)
int x;
{
	printf("iprint -> %d\n", x);
}

void lprint(x)
long x;
{
	printf("lprint -> % ld\n", x);
}

void fprint(x);
float x;
{
	printf("fprint -> %.1f\n", x);
}

void dprint(x)
double x;
{
	printf("dprint -> %.1f\n", x);
}
/*スタックオーバーフローについて考察するためのプログラム*/

int z[8000];

void func(void)
{
	int x[8000];
}

int main(void)
{
	int a[8000];

	func();

	return 0;
}
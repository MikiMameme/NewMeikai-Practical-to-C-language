/*マクロによって構造体に名前を与える（その１：エラー）*/

#define complex struct{double re, im;}

int main(void)
{
	complex a, b;
	complex x, y;

	a = b;
	x = b;/*コンパイルエラー*/

	return 0;
}
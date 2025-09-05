/*マクロによって構造体に名前を与える（その２）*/

struct __comp { double re, im; };

#define complex struct __comp

int main(void)
{
	complex a, b; /*処理系によってはエラー*/
	complex x, y;

	a = b;
	x = b;

	return 0;
}
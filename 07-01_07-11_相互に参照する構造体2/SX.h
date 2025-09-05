/*構造体SXの宣言（メンバとして構造体Syへのポインタを持つ）*/

#ifndef __SX
#define __SX

typedef struct __sy SY;

typedef struct{
	int a;
	SY *b;
}SX;

#endif
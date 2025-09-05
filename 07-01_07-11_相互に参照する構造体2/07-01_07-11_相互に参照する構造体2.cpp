/*構造体SXおよびSYの宣言*/

typedef struct __sy SY;

typedef struct {
	int a;
	SY* b;
}SX;

typedef struct __sy {
	int c;
	SX d;
}SY;
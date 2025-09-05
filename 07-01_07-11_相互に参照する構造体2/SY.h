/*構造体SYの宣言（メンバとして構造体SXそのものをもつ）*/

#indef __SY
#define __SY

#include "SX.h"

typedef struct __sy {
	int c;
	SX d;
}SY;

#endif
/*関数多重定義によるmax2を定義するヘッダ(C / C++)*/

/* C++ */
#ifdef __cplusplus
	inline int max2(int a, int b) { return a > b ? a : b;  }
	inline long max2(long a, long b) { return a > b ? a : b; }
	inline double max2(double a, double b) { return a > b ? a : b; }

/* C */
#else
	#define max2(a, b) ((a) > (b) ? (a) : (b))
#endif
/*初期化子の与えられてない自動記憶域期間をもつオブジェクトが
不定値、すなわちゴミの値で初期化されることを確認する*/

/*警告を無効化*/
#pragma warning(disable: 4700)

#include<stdio.h>

int main(void)
{
	int x;

	printf("x = %d\n", x);
	
	return 0;
}
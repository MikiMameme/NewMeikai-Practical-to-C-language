/*《同一の先頭のメンバの並び》をもつ共用体の使用例*/

#include<stdio.h>

/*動物共用体*/
typedef union {
	struct{
	int type;
}code;

struct {
	int type;
	const char* name;
}dog;

struct {
	int type;
	double weight;
}cat;

}Animal;

/*動物のデータを種別に応じて表示*/
void print_animal(const Animal* x)
{
	switch (x->code.type) {
	case 1: printf("犬、名前は%sです\n", x->dog.name); break;
	case 2: printf("猫、体重は%.1fkgです\n", x->cat.weight); break;
	}
}


int main(void)
{
	Animal a, b;

	a.dog.type = 1;
	a.dog.name = "Taro";

	b.cat.type = 2;
	b.cat.weight = 3.5;

	print_animal(&a);

	print_animal(&b);

	return 0;
}
/*関数テンプレートmax2を利用するプログラム（C++)*/

#include<iostream>

#include "max2_template.h"

using namespace std;

int main(void)
{
	int a, b;
	double x, y;

	cout << "整数aの値 :"; cin >> a;
	cout << "整数bの値 :"; cin >> b;
	cout << "実数xの値 :"; cin >> x;
	cout << "実数yの値 :"; cin >> y;

	cout << "max2(a, b) =" << max(a, b) << '\n';
	cout << "max2(x, y) =" << max(x, y) << '\n';

	return 0;
}
#include <iostream>
#include "rational.h"
#include <locale.h>

using namespace std;

istream& operator >>(istream& in, Rational& r) {
	in >> r.numer >> r.denom;
	return in;
}

//HELLO IM COMMENTING
//MUR

ostream& operator <<(ostream& out, const Rational& r) {
	out << r.numer << "/" << r.denom;
	return out;
}

int main() {
	setlocale(LC_ALL, "Russian");
	Rational a(1, 2), b(-1, 6);
	cout << "a = " << a << " b = " << b << " a+b = " << a + b << endl;
	cout << " a (" << a << ") *= b(" << b << ")" << endl;
	a *= b;
	cout << "a = " << a << " b = " << b << " a-b=" << a-b << endl;
	Rational c = 3;
	cout << "b = " << b << " c = " << c << " b/c = " << b / c << endl;

	Rational e(7, 8), f(5, 12);
	cout << "e=" << e << " f=" << f << " e+f=?" << endl;
	cout << "Введите результат g=m/n в формате: m n" << endl;
	Rational g;
	cin >> g;
	if (e + f != g)
		cout << "Неправильно! e+f=" << e + f << endl;
	else
		cout << "Правильно!" << endl;
	system("pause");
	return 0;
}
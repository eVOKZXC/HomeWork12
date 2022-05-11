#include "Header.h"

Complex::Complex() {
	re = 0;
	im = 0;
}

Complex::Complex(int re, int im) {
	this->re = re;
	this->im = im;
}

int Complex::moduleComplexNum() {
	return sqrt(pow(re, 2) + pow(im, 2));
}

bool Complex::operator >(const Complex& other) {
	return this->moduleComplexNum() > (sqrt(pow(other.re, 2) + pow(other.im, 2)));
}

ostream& operator <<(ostream& os, const Complex& other) {
	os << other.re << " " << other.im;
	return os;
}

template <class T>
void _sort(T* mas, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i; j > 0 and mas[j - 1] > mas[j]; --j) {
			swap(mas[j - 1], mas[j]);
		}
	}
	for (int i = 0; i < size; ++i)
		cout << mas[i] << endl;
}

template void _sort<int>(int*, int);
template void _sort<double>(double*, int);
template void _sort<Complex>(Complex*, int);
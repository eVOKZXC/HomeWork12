#include "Header.h"

int main() {

	srand(time(NULL));
	double a[10] = { -12.21, 0., 13.1, 8.4, 33.33, -7.12, 11.27, 42.076, 53.49, 74.0502 };
	int b[10] = { 9, 7, 12, 18, 69, -4, -228, -169, 0, 28 };
	Complex c[10];
	for (int i = 0; i < size(c); ++i) {
		Complex buf(rand() % 50, rand() % 50);
		c[i] = buf;
	}

	_sort(a, 10);
	cout << endl;
	_sort(b, 10);
	cout << endl;
	_sort(c, 10);

}
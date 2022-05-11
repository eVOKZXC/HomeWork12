#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <time.h>

using namespace std;

class Complex {
private:
	int re;
	int im;
public:
	Complex();
	Complex(int re, int im);

	int moduleComplexNum();

	bool operator >(const Complex& other);
	friend ostream& operator <<(ostream& os, const Complex& other);

};

template <class T>
void _sort(T* mas, int size);

#endif Header
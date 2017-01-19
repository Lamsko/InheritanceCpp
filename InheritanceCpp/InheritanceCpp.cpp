// InheritanceCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class B
{
public:
	int x;

	B(int a)
		: x(a)
	{}

	void bx()
	{
		cout << "B: " << x << endl;
	}
};

class P : public B
{
public:
	int x;

	P(int a, int b)
		: B(a), x(b)
	{}

	void px()
	{
		cout << "P: " << x << endl;
	}
};

int main()
{
	P p(1, 2);
	p.bx();
	p.px();
	cout << "---" << endl;
	p.x = 0;
	p.bx();
	p.px();
	cout << "---" << endl;
	p.B::x = 8;
	p.bx();
	p.px();
}
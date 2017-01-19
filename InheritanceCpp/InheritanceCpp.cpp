// InheritanceCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Bazowa
{
private:
	int prywatna;
protected:
	int chroniona;
public:
	int publiczna;
};

class PochodnaPublic : public Bazowa
{
public:
	void f()
	{
		chroniona = 0;
		publiczna = 0;
	}
};

class PochodnaProtected : protected Bazowa
{
	void f()
	{
		chroniona = 0;
		publiczna = 0;
	}
};

class PochodnaPrivate : private Bazowa
{
	void f()
	{
		chroniona = 0;
		publiczna = 0;
	}
};

int main()
{
	PochodnaPublic ppu;
	ppu.publiczna = 0;
	PochodnaProtected ppr;
	PochodnaPrivate ppv;
    return 0;
}


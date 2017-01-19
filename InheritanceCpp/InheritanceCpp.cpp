// InheritanceCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Ksztalt
{
public:
	virtual ~Ksztalt() {}

	virtual void rysuj() = 0;
	void maluj() 
	{
		cout << "Maluje ksztalt." << endl;
	}
};

class Kolo : public Ksztalt
{
public:
	virtual void rysuj()
	{
		cout << "Rysuje kolo." << endl;
	}
	void maluj()
	{
		cout << "Maluje kolo." << endl;
	}
};

class Kwadrat : public Ksztalt
{
public:
	virtual void rysuj()
	{
		cout << "Rysuje kwadrat." << endl;
	}
	void maluj()
	{
		cout << "Maluje kwadrat." << endl;
	}
};

int main()
{
	Ksztalt * a = new Kolo, *b = new Kwadrat;

	a->rysuj();
	b->rysuj();
	a->maluj();
	b->maluj();
	Kolo ko;
	Kwadrat kw;
	ko.rysuj();
	kw.rysuj();
	ko.maluj();
	kw.maluj();

	delete a;
	delete b;
}
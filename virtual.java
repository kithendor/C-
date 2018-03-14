#include "stdafx.h"
#include <iostream>
#include <string>
#include "Base.h"
#include "Orc.h"

using namespace std;

class Mama {
public:
	int x;
	virtual void set()
	{
		x = 5;
	}
};

class Paidaki : public Mama {
public:
	void set()
	{
		x = 25;
	}
	int print()
	{
		return x;
	}

};

int main()
{
	Paidaki p;
	p.set();


	Mama *m;
	m = &p;

	m->set();

	cout<<p.print();

	int x;
	cin >> x;
    return 0;
}


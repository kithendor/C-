#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


class Shape {
public:
	void setx(int a) { x = a; }
	void sety(int b) { y = b; }
protected:
	int x, y;
};

class Trig: public Shape {
public:
	int area() { return x*y / 2; }
};

class Rect : public Shape {
public:
	int area() { return x*y; }
};

int main()
{

	Trig t;
	t.setx(5);
	t.sety(2);
	cout << "emvado trigonou: " << t.area() << endl;

	Rect *r = new Rect;
	r->setx(5);
	r->sety(2);
	cout << "emvado orth: " << r->area() << endl;
	

	int x;
	cin >> x;
    return 0;
}


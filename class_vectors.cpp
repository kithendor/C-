#include "stdafx.h"

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Circle {
public:
	Circle()
	{
		r = 0;
	}
	Circle(int a)
	{
		r = a;
	}
	int getR() const
	{
		return r;
	}

	float area()
	{
		return 3.14 * r * r ;
	}
	
	float perimeter()
	{
		return 2 * 3.14 * r;
	}
private:
	int r;
};

int main()
{
	vector<Circle> kuklakia;
	int a, b, ep;
	

	do {
		cout << "dwse aktina";
		cin >> a;
		Circle c(a);
		kuklakia.push_back(c);

		cout << "stamatas???" << endl;
		cin >> ep;

	} while (ep != 0);


	for (unsigned int i = 0; kuklakia.size(); i++)
	{
		cout << "_______" << i + 1 << "os kuklos______" << endl;
		cout << "o kuklos me aktina " << kuklakia[i].getR() << " exei" << endl;
		cout << "emvado " << kuklakia[i].area() << " perimetro " << kuklakia[i].perimeter() << endl;
		cout << endl;
	}
	

	int x;
	cin >> x;
    return 0;
}



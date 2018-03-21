#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, dif;
	cout << "dwse mou to 1o";
	cin >> a;
	cout << "dwse mou to 2o";
	cin >> b;

	try {
		if (b == 0)
		{
			throw "dieresi me 0";
		}
		if (a<0)
		{
			throw "a arnitiko";
		}
		if (b < 0)
		{
			throw "b arnitiko";
		}
		dif = a / b;
		cout << "tha pareis " << dif << endl;
	}
	catch (char* tsiou)
	{
		cout << "ERO"<<tsiou;
	}

	cout << "Kalimera sas" << endl;

	int x;
	cin >> x;
    return 0;
}


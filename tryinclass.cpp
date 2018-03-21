#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

class Tsiou {
public:
	int ela(int a)
	{
		return (a>0)? 2 * a : throw "lathos input";
	
	}
};

int main()
{
	int a, b, dif;
	cout << "dwse mou to 1o";
	cin >> a;
	Tsiou ts;
	try
	{
		cout << ts.ela(a);
	}
	catch (const char* error)
	{
		cout << error;
	}
	

	
	int x;
	cin >> x;
    return 0;
}


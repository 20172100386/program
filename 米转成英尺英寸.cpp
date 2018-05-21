#include "stdafx.h"
#include <iostream>
using namespace std;
class CLenth
{
private:
	int feet;
	double inches;
public:
	CLenth()
	{
		feet = 0;
		inches = 0;
	}
	/*void setvalue(int f,int i)
	{
	feet = f;
	inches = i;
	}*/
	void setmeter(double meter)
	{
		feet = meter * 3.2808;
		inches = (meter * 3.2808 - feet) * 12;
	}
	void display()
	{
		cout << "feet = " << feet << "   inches = " << inches << endl;
	}
};

int main()
{
	CLenth oc;
	oc.setmeter(10);
	//oc.setvalue(9,10);
	oc.display();
	return 0;
}


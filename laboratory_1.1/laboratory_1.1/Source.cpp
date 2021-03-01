#include "Line.h"
#include <iostream>
#include <Windows.h>
using namespace std;
LINE makeLine(double A, double B, double x)
{
	LINE y;
	if (y.Init(A, B, x))
		cout << "enter the value of the functions:" << endl;
	return y;
}
int main()
{
	
	LINE y;
	y.Read();
	y.Display();
	cout << " y = " << y.function() << endl << endl;
	double A, B, x;
	cout << "enter the value of the functions:" << endl << endl;
	cout << " A = "; cin >> A;
	cout << " B = "; cin >> B;
	cout << " x = "; cin >> x;
	if (A == 0)
	{
		cout << " " << endl;
		system("color 4F ");
		cout << "You have entered an invalid value for variable A" <<endl;
		return 0;
		
	}
	y = makeLine(A, B, x);
	y.Display();
	cout << " y = " << y.function() << endl;
	cin.get();
	return 0;
}
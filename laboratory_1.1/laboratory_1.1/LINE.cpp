#include "Line.h" //головний файл
#include <iostream>
#include <cmath>
using namespace std;

bool LINE::Init(double A, double B, double x)
{
	if (A != 0)
	{
		first = A;
		second = B;
		X = x;
		return true;
	}
	else
	{
		system("color 4F ");
		cout << " " << endl;
		cout << "You have entered an invalid value for variable A,try again" << endl;
		cout << " " << endl;
		return false;
	}
}
void LINE::Read()
{

	double A, B, x;

	do
	{
		cout << "enter the value of the functions:" << endl;
		cout << " " << endl;
		cout << " A = "; cin >> A;
		system("color 0F ");
		cout << " B = "; cin >> B;
		cout << " x = "; cin >> x;
	} while (!Init(A, B, x));
}
void LINE::Display()
{

	cout << endl;
	cout << " A = " << first << endl;
	cout << " B = " << second << endl;
	cout << " x = " << X << endl;
}
double LINE::function()
{

	return first * X + second;
}
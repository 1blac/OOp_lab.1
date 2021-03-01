#include "D:\Нова папка\laboratory_1.2\Angle.h"
#include <iostream>
using namespace std;
bool Angle::setGrades(double value)
{
	if (value >= 0 && value <= 360)
	{
		grades = value;
		return true;
	}
	else
	{
		grades = -value;
		return false;
	}
}
bool Angle::setMinutes(double value)
{
	if (value > 0)
	{
		minutes = value;
		return true;
	}
	else
	{
		minutes = -value;
		return false;
	}
}
bool Angle::setGradesChangePlus(double value)
{
	if (grades + value > 360) 	
	{
		cout << "inavid value" << endl;
		return false; 
	}
	else
	{
		grades += value;
		return true;
	}
}
bool Angle::setGradesChangeMinus(double value)
{
	if (grades - value < 0)
	{
		cout << "inavid value" << endl;
		return false;
	}
	else
	{
		grades -= value;
		return true;
	}
}

bool Angle::Init(double grades, double minutes)
{
	
	return setGrades(grades) && setMinutes(minutes);
}
void Angle::Read()
{
	double grades;
	double minutes;
	do
	{   
		cout << " grades = ? "; cin >> grades;
		cout << " minutes = ? "; cin >> minutes;
	} while (!Init(grades, minutes));
}
void Angle::Display() const
{
	cout << " grades = " << grades << endl;
	cout << " minutes = " << minutes << endl;
}
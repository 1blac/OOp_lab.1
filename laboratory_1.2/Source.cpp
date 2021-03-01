#include <iostream>
#include "D:\Нова папка\laboratory_1.2\Angle.h"
using namespace std;
int main()
{
	Angle g;
	g.Read();
	g.Display();
	cout << " Grades in radians: " << g.getRadians() << endl;
	g.setGradesChangePlus(69);
    cout << "GradesChangePlus: " << g.getGrades() << endl;
	g.setGradesChangeMinus(13);
	cout << "GradesChangeMinus: " << g.getGrades() << endl;
	
	return 0;
}
#pragma once
#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#define M_PI
#include <math.h>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793238463;
class Angle
{
private:
	double grades;
	double minutes;
public:
	double getGrades() const { return grades; }
	double getMinutes() const { return minutes; }
	bool setGrades(double);
	bool setMinutes(double);
	bool setGradesChangePlus(double);
	bool setGradesChangeMinus(double);
	double getRadians() const { return grades * PI/180; }
	bool Init(double grades, double minutes);
	void Read();
	void Display() const;
};

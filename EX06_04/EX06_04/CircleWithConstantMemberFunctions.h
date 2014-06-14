#ifndef CircleWithConstantMemberFunctions_H
#define CircleWithConstantMemberFunctions_H

#include<iostream>
using namespace std;

class Circle {
private:
	double radius;
	static int getNumberOfObjects;

public:

	Circle();
	Circle(double newRadius);
	double getRadius() const;
	void setRadius(double newRadius);
	bool operator<(const Circle& secondCircle) const;
	bool operator==(const Circle& secondCircle) const;
};
#endif
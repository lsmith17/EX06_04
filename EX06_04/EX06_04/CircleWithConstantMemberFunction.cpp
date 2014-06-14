#include<iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;

Circle::Circle(){
	radius = 1;
}
Circle::Circle(double newRadius){
	radius = newRadius;
}
double Circle::getRadius() const{
	return radius;
}
void Circle::setRadius(double newRadius){
	radius = (newRadius >= 0) ? newRadius : 0;
}
bool Circle::operator<(const Circle& secondCircle) const{
	return getRadius() < secondCircle.getRadius();
}

bool Circle::operator==(const Circle& secondCircle) const{
	return getRadius() == secondCircle.getRadius();
}

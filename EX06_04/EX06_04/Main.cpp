#include<iostream>
#include"CircleWithConstantMemberFunctions.h"
using namespace std;

int main(){
	Circle c1, c2;
	c1.setRadius(1);
	c2.setRadius(3);

	if (c1 < c2)
	{
		cout << "Circle 2 with radius " << c2.getRadius() << " is greater than circle 1 with a radius of " << c1.getRadius() << endl;
	}
	else if (c1 == c2){
		cout << "Circle 1 with radius " << c1.getRadius() << " is the same as circle 2 with radius " << c2.getRadius() << endl;
	}
	else
	{
		cout << "Circle 1 with radius " << c1.getRadius() << " is greater than circle 2 with a radius of " << c2.getRadius() << endl;
	}
}
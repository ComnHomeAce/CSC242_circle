#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed

int main()
{
	double radius, area;
	const double PI = 3.14159265;
	cout << "Enter radius\n";
	//Add code to read user input and store in variable radius
	cin >> radius;

	//Calculate the area of the circle
		area = PI * radius * radius;
	cout << "The area of a circle with radius " << radius << " is " << area << "\n";

	return 0;
}
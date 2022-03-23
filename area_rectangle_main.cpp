//EXAM 1 PRACTICE 
//**********************************************************************
// File name:   main.cpp
// Author:      Ashley Ung 
// Date:        September 21, 2020   
// Assignment:  Area of Rectangle  
// Purpose:     Area of Rectangle 
// Computer OS: MacOS
//**********************************************************************

#include <iostream> 
using namespace std; 

int main () {
	
	int rectangleLengthOne; 
	int rectangleLengthTwo; 
	int rectangleWidthOne; 
	int rectangleWidthTwo; 
	int areaOne;
	int areaTwo;
	
	cout << "Please enter the length of rectangle one: ";
	cin >> rectangleLengthOne; 
	
	cout << "Please enter the width of rectangle one: ";
	cin >> rectangleWidthOne;
	
	cout << "Please enter the length of rectangle two: "; 
	cin >> rectangleLengthTwo; 
	
	cout << "Please enter the width of rectangle two: ";
	cin >> rectangleWidthTwo;
	
	areaOne = rectangleLengthOne * rectangleWidthOne; 
	
	areaTwo = rectangleLengthTwo * rectangleWidthTwo;

	if (areaOne == areaTwo) {
		cout << "The rectangles have the same area!";
	}
	else {
		if (areaOne > areaTwo) {
			cout << "Rectangle one has the greater area!";
		}
		else {
			cout << "Rectangle two has the greater area!";
		}
	}
	
	return 0;
	
}

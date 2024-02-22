#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int choice;
	double radius, length, width, area;
	//PI not declare
	const double PI = 3.142;
	
	//Prompt user to choose a shape
	cout << "Choose a shape to calculate its area: " << endl;
	cout << "1. Circle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "Enter your choice (1 or 2): ";
	cin >> choice;
	
	//If user choose a circle
	if (choice == 1) {
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		
		area = PI * pow(radius, 2);
		cout << "Area of the circle is: " << area << endl;
		
	}
	
	//If user choose a rectangle
	else if (choice == 2) {
		cout << "Enter the length and width of the rectangle: ";
		cout << "Enter the length of the rectangle: ";
		cin >> length;
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		
		//If user try to put an invalid number
		if ((length <= 0) || (width <= 0))
		 cout << "Invalid input. Length and width cannot be negative or zero." << endl;
		 
		area = length * width; //Calculate area of rectangle
		cout << "Area of rectangle is: " << area << endl;
   }   
	else
	  cout << "Invalid choice. Please enter 1 or 2." << endl;
	//end of if
	
	return 0;
}//end of the main function
		
		
	

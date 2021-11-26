#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	float circle_radius, circle_area;
	
	cout << "Calculation of the area of the circle:\n\n";
	cout << "Input the radius of the circle: ";
	cin >> circle_radius;
	
	circle_area = 3.14 * (circle_radius * circle_radius);
	
	if (circle_radius < 0){
		cout << "\nInvalid value, please input a value greater than zero.\nRun the program again!";
	} else if (circle_radius == 0){
		cout << "\nInvalid value, please input a value greater than zero.\nRun the program again!";
	} else {
		cout << "\nArea value is " << circle_area << "m².";
	}
}


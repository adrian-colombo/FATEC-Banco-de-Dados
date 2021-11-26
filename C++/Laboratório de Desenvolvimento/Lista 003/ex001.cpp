#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	float width_size, length_size, rectangle_area;
	
	cout << "Calculation of the area of the triangle:\n\n";
	cout << "Input the width value (in meters): ";
	cin >> width_size;
	
	cout << "Input the length value (in meters): ";
	cin >> length_size;
	
	rectangle_area = width_size * length_size;
	
	if (width_size < 0 && length_size == 0 || width_size == 0 && length_size < 0){
		cout << "\nInvalid value, please input a positive value and greater than zero.\nRun the program again!";
	} else if (width_size < 0 || length_size < 0){
		cout << "\nInvalid value, please input a positive value and greater than zero.\nRun the program again!";
	} else if (width_size == 0 || length_size == 0){
		cout << "\nInvalid value, please input a value greater than zero.\nRun the program again!";
	} else {
		cout << "\nArea value is " << rectangle_area << "m².";
	}
}


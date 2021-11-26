#include <iostream>
#include <locale.h>
using namespace std;

main (){
	setlocale(LC_ALL,"");
	float width_size, length_size, rectangle_area;
	float circle_radius, circle_area;
	int op = 1;
	
	while (op != 0){
		system ("cls");
		cout << "1 - Calculate rectangle area";
		cout << "\n2 - Calculate circle area";
		cout << "\n0 - Get out";
		cout << "\n\nInput the desired option: ";
		cin >> op;
		
		if (op == 1){
			system ("cls");
			cout << "Calculation of the area of the rectangle:\n\n";
			
			cout << "Input the width value (in meters): ";
			cin >> width_size;
			
			cout << "Input the length value (in meters): ";
			cin >> length_size;
			
			rectangle_area = width_size * length_size;

			if (width_size <= 0 || length_size <= 0){
				cout << "\nInvalid value, please input a positive value and greater than zero.\nRun the program again!";
				
			} else {
				cout << "\nArea value is " << rectangle_area << "m².";
			}
			
			cout << "\n\nInput enter to return to the menu.";
			fflush(stdin);
			getchar();
		} else if (op == 2){
			system ("cls");
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
			
			cout << "\n\nInput enter to return to the menu.";
			fflush(stdin);
			getchar();	
		} else if (op == 0){
			system ("cls");
			cout << "Program closed.";
		} else{
			system ("cls");
			cout << "Please enter a valid value.";
			cout << "\n\nInput enter to return to the menu.";
			fflush(stdin);
			getchar();
		} 
	} // while (op != 0)
} // main

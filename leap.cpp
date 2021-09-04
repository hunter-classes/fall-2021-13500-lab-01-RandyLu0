/*
Name: Randy Lu
Instructor: Mr. Zamansky
Assignment: Lab 1C

Prompts the user for a year
displays leap year for
leap years or common year for 
common years
*/

#include <iostream>
using std::cout;
using std::cin;

int main(){
	cout << "Enter a year: ";
	int y;
	cin >> y;
	if(y % 4 == 0 and y % 100 != 0){
		cout << "\n\nLeap year\n";
	}else{
		if(y % 400 == 0){
			cout << "\n\nLeap year\n";
		}else{
			cout << "\n\nCommon year\n";
		}
	}
	return 0;
}

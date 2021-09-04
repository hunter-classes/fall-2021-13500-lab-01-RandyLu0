/*
Name: Randy Lu
Instructor: Mr. Zamansky
Assignment: Lab 1D

Prompts the user for a year and 
month and displays the amount of
days in the month
*/

#include <iostream>
using std::cout;
using std::cin;

int main(){

    int year, month;

    cout << "Enter the year: ";
    cin >> year;
    cout << "\nEnter the month: ";
    cin >> month;

    if((month < 8 and month % 2 == 1) or (month >= 8 and month % 2 == 0)){
        cout << "\nThere are 31 days\n";
    }else{
		if((month < 8 and month % 2 == 0 and month != 2) or (month > 8 and month % 2 == 1)){
			cout << "\nThere are 30 days\n";
		}else{
			if(year % 4 == 0 and year % 100 != 0){
				cout << "\nThere are 29 days\n";
			}else{
				if(year % 400 == 0){
					cout << "\nThere are 29 days\n";
				}else{
						cout << "\nThere are 28 days\n";
				}
			}
		}
	}
	return 0;
}

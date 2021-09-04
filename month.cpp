//File name: /home/randy/135-rec/fall-2021-13500-lab-01-RandyLu0/month.cpp
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

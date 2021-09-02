//File name: /home/randy/135-rec/fall-2021-13500-lab-01-RandyLu0/leap.cpp
#include <iostream>
using std::cout;
using std::cin;

int main(){

    int year;

    cout << "Enter year: ";
    cin >> year;
    
    if(year % 4 != 0){
        cout << "\n\nCommon year\n";
    }else{
        if(year % 100 != 0){
            cout << "\n\nLeap year\n";
        }else{
            if(year % 400 != 0){
                cout << "\n\nCommon year\n";
            }else{
                cout << "\n\nLeap year\n";
            }    
        }
    }
    return 0;
}

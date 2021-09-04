/*
Name: Randy Lu
Instructor: Mr. Zamansky
Assignment: Lab 1B

Prompts the user for three integers
displays the smallest of the three.
*/

#include <iostream>
using std::cout;
using std::cin;

int main(){

    int x,y,z,s;

    cout << "\nEnter the first number: ";
    cin >> x;
    cout << "\nEnter the second number: ";
    cin >> y;
    cout << "\nEnter the third number: ";
    cin >> z;

    if(x <= y and x <= z){
        s = x;
    }else{
        if(y <= x and y <= z){
            s = y;
        }else{
            s = z;
        }
    }

    cout << "\n\nThe smaller of the three is " << s << "\n";
    
    return 0;
}

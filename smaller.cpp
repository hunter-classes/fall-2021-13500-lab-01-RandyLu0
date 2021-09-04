/*
Name: Randy Lu
Instructor: Mr. Zamansky
Assignment: Lab 1A

Prompts the user for two integers
displays the smaller of the two.
*/

#include <iostream>
using std::cout;
using std::cin;

int main(){

    int n,m,s;

    cout << "Enter the first number: ";
    cin >> n;
    cout << "\nEnter the second number: ";
    cin >> m;
    
    if(n <= m){
        s = n;
    }else{
		s = m;
    }

	cout << "\n\nThe smaller of the two is " << s << "\n";
    
    return 0;
}

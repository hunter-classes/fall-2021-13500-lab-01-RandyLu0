//File name: /home/randy/135-rec/fall-2021-13500-lab-01-RandyLu0/smaller.cpp
#include <iostream>
using namespace std;

int main(){

    int n,m,s;

    cout << "\nEnter the first number: ";
    cin >> n;
    cout << "\nEnter the second number: ";
    cin >> m;
    if(n <= m){
        s = n;
    }else{
		s = m;
    }
	cout << "\n\nThe smallest number is " << s << endl;
    return 0;
}

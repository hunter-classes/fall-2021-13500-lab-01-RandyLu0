//File name: /home/randy/135-rec/fall-2021-13500-lab-01-RandyLu0/smaller3.cpp
#include <iostream>
using namespace std;

int main(){
    int x,y,z,s;
    cout << "\nEnter the first number: ";
    cin >> x;
    cout << "\nEnter the second number: ";
    cin >> y;
    cout << "\nEnter the third number: ";
    cin >> z;
    if (x <= y and x <= z){
        s = x;
    }else{
    if (y <= x and y <= z){
        s = y;
    }else{
        s = z;
    }
    }
    cout << "\n\nThe smallest number is " << s << endl;
    

    return 0;
}

// C++ Program to print: if three input variables are Sides of a Triangle - 

#include <iostream>
using namespace std ;
int main () {
    int a, b, c ;
    cout << "Enter the value of 1st side: " ;
    cin >> a ;
    cout << "Enter the value of 2nd side: " ;
    cin >> b ;
    cout << "Enter the value of 3rd side: " ;
    cin >> c ;
    if ((a+b)>c and (b+c)>a and (c+a)>b){
        cout << "Valid Sides of a Triangle." ;
    }
    else {
        cout << "Invalid Sides of a Triangle." ;
    }
}
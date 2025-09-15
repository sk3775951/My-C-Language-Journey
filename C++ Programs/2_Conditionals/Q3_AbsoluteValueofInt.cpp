// C++ Program to print: Absolute value of Integer Number - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if (n < 0){
        cout << "Absolute value of given number is: " << -(n) ;
    }
    else {
        cout << "Absolute value of given number is: " << (n) ;
    }
}
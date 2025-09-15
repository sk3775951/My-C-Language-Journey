// C++ Program to print: Greatest among three input numbers - 

#include <iostream>
using namespace std ;
int main () {
    int a, b, c ;
    cout << "Enter the 1st number: " ;
    cin >> a ;
    cout << "Enter the 2nd number: " ;
    cin >> b ;
    cout << "Enter the 3rd number: " ;
    cin >> c ;
    if (a>b and a>c){
        cout << "Greatest number among three input values is: "<< a ;
    }
    else if (b>a and b>c){
        cout << "Greatest number among three input values is: "<< b ;
    }
    else {
        cout << "Greatest number among three input values is: "<< c ;
    }
}
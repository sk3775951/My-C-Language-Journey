// C++ Program to print: Swap of Two Numbers - 

#include <iostream>
using namespace std ;
void swapM1 (int a, int b) {
    cout << "M:01-Using third variable :: " ;
    int temp = a ;
    a = b ; b = temp ;
    cout << "Swap two numbers are: " << a << ", " << b ;
}
void swapM2 (int a, int b) {
    cout << "\nM:02-Without using third variable :: " ;
    a = (a+b) ; 
    b = (a-b) ;
    a = (a-b) ;
    cout << "Swap two numbers are: " << a << ", " << b ;
}
int main () {
    int x , y ;
    cout << "Enter 1st number: " ;
    cin >> x ;
    cout << "Enter 2nd number: " ;
    cin >> y ;
    swapM1 (x,y) ;
    swapM2 (x,y) ;
}
// C++ Program to print: Basics of Pointers - 

#include <iostream>
using namespace std ;
int main () {
    int x = 18 ;
    int* ptr = &x ;
    cout << "Address of x using &x: " << &x << endl ;
    cout << "Address of x using ptr: " << ptr << endl ;
    cout << "Value of x using call by Value (x): " << x << endl ;
    cout << "Value of x using call by Referance (*ptr): " << *ptr << endl ;
    // Updation of x using its address -
    *ptr = 7 ;
    cout << "Updated Value of x using call by Value (x): " << x << endl ;
    cout << "Updated Value of x using call by Referance (*ptr): " << *ptr ;
}
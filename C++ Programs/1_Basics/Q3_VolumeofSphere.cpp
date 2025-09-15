// C++ Program to calculate: Volume of Sphere - 

#include <iostream>
using namespace std ;
int main () {
    float r, PI = 3.141592 ;
    cout << "Enter value of Radius: " ;
    cin >> r ;
    float volume = (4.0/3*PI*r*r*r) ;
    cout << "Volume of Sphere is: " <<volume ;
}
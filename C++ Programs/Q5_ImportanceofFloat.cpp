// C++ Program to print: float  answer- 

#include <iostream>
using namespace std ;
int main () {
    float x = 7.0/22*(3.14+2)*3/5 ;   // int/int gives intger value:-(i.e. 7/22 gives 0 as result)
    cout << "Answer: " << x ;         // Thus, float/int operation must be done to get actual answer.
    cout << "\nint/int gives int : " << 5/2 ;
    cout << "\nfloat/int gives float : " << 5.0/2 ;
    cout << "\nint/float gives float : " << 5/2.0 ;
    cout << "\nfloat/float gives float : " << 5.0/2.0 ;
}
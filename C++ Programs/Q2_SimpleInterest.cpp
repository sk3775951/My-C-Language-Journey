// C++ Program to calculate: Simple Interest - 

#include <iostream>
using namespace std ;
int main () {
    float p, r, t ;
    cout << "Enter the Principal: " ;
    cin >> p ;
    cout << "Enter the Rate of Interest: " ;
    cin >> r ;
    cout << "Enter the Time (in Years): " ;
    cin >> t ;
    float SI = (p*r*t)/100 ;
    cout << "Calculated Simple Interest is: " << SI ;
}
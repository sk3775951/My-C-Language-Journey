// C++ Program to print: the permutation of two numbers (nPr)- 

#include <iostream>
using namespace std ;
int factorial (int x) {
    int fact = 1 ;
    if (x > 1) {
        for (int i = x; i > 1; i--) {
            fact *= i ;
        }
    }
    return fact ;
}
int main () {
    int n, r ;
    cout << "Enter the value of n: " ;
    cin >> n ;
    cout << "Enter the value of r: " ;
    cin >> r ;
    cout << "Permutation of " <<n <<"P" <<r << " is: " ;
    cout << factorial (n) / factorial (n-r) ;
}
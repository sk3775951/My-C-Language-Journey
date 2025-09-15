// C++ Program to print: Factorial of N using Recursion - 

#include <iostream>
using namespace std ;
int Factorial (int n) {
    if (n == 0 or n == 1) {
        return 1 ;
    }
    else return (n * Factorial(n-1)) ;
}
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    cout << "Factorial of " <<n << " is: " << Factorial(n) ;
}
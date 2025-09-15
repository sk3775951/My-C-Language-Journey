// C++ Program to print: Fibonacci Series using Recursion :: 1 1 2 3 5 8 13 21 34 55 - 

#include <iostream>
using namespace std ;
int Fibonacci (int n) {
    if (n == 1 or n == 2) {
        return 1 ;
    } 
    else return (Fibonacci(n-1) + Fibonacci(n-2)) ;
}
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    cout << "Fibonacci Series upto " << n << " is: " ; 
    for (int i = 1; i <= n ; i++) {
        cout << Fibonacci (i) << " ";
    }
    cout << "\nFibonacci value of n=" << n << " is: "<< Fibonacci (n) ;
}
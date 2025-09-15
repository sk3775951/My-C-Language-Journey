// C++ Program to print: Sum from 1 to N (using Return-type) - 

#include <iostream>
using namespace std ;
int Sum (int n) {
    if (n == 1) {   // Base case
        return 1 ;  
    }
    else {          // Recursive case
        return (n + Sum(n-1)) ;
    }
}
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    cout << "Sum of 1 to " <<n << " is: " << Sum(n) ;
}
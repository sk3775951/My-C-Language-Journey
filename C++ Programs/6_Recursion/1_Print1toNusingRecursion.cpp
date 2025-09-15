// C++ Program to print: Print 1 to N using Recursion - 

#include <iostream>
using namespace std ;
int count1toN (int n) {
    if (n == 0) return 0 ;
    else {
        count1toN (n-1) ;   // First count1toN fun. runs till n=0; then printing of fun. having n=1,2,3... is done
        cout << n << " " ; // If this command is written above coun1toN fun; then
                            // printing of fun. having n= N,N-1...,3,2,1 is done.
    }
}

int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    count1toN(n) ;
}
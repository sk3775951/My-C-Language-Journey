// C++ Program to print: Nth term in G.P (a=1;d=2)- 

#include <iostream>
#include <math.h>
using namespace std ;
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    int Gn =  1*pow(2,n-1);    // Gn = a*r^n-1
    cout << "The " << n <<"th term using formula is: " << Gn << endl ;
    cout << "The series is: " ;
    for (int i = 1; i <= pow(2,n-1); i*=2){
        cout << i << " " ;
    }
    cout << "\nAlternate method to print the same series: " ;
    int a = 1 ; // First term
    for (int i = 0; i < n; i++) {
        cout << a << " " ;
        a *= 2 ;    // Common difference
    }
}
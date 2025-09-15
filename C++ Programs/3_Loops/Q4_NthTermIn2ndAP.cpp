// C++ Program to print: Nth term in A.P (a=4;d=3)- 

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    int An = 4 + (n-1)*3 ;
    cout << "The " << n <<"th term using formula is: " << An << endl ;
    cout << "The series is: " ;
    for (int i = 4; i <= (3*n+1); i+=3){
        cout << i << " " ;
    }
    cout << "\nAlternate method to print the same series: " ;
    int a = 4 ; // First term
    for (int i = 0; i < n; i++) {
        cout << a << " " ;
        a += 3 ;    // Common difference
    }
}
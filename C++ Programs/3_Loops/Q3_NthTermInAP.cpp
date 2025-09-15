// C++ Program to print: Nth term in A.P (a=1;d=2)- 

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    int An = 1 + (n-1)*2 ;
    cout << "The " << n <<"th term using formula is: " << An << endl ;
    cout << "The series is: " ;
    for (int i = 1; i <= (2*n-1); i+=2){
        cout << i << " " ;
    }
}
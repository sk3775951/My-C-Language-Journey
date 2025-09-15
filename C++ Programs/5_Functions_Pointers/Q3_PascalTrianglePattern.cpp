// C++ Program to print: Pascal Triangle pattern (rows=6) -
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 

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
int nCr (int n, int r) {
    return factorial(n)/(factorial(r)*factorial(n-r)) ;
}
int main () {
    int row ;
    cout << "Enter the number of rows: " ;
    cin >> row ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr (i,j) << " ";
        }
        cout << endl ;   
    }
}
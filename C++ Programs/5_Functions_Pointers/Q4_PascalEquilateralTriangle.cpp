// C++ Program to print: Pascal Equilateral Triangle pattern (rows=6) -
//       1 
//      1 1 
//     1 2 1 
//    1 3 3 1 
//   1 4 6 4 1 
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
int main () {
    int row ;
    cout << "Enter the number of rows: " ;
    cin >> row ;
    for (int i = 0; i < row; i++) {
        if (i < 5) {
            for (int k = 0; k < (row-i); k++) {
                cout << " " ;
            }
        }
        else {
            for (int k = 0; k < (row-i-1); k++) {
                cout << " " ;
            }
        }
        for (int j = 0; j <= i; j++) {
            cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
        }
        cout << endl ;   
    }
}
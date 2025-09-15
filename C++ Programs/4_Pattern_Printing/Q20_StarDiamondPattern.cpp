// C++ Program to print: Star Pyramid pattern (rows=7) - 
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    int half = (row+1)/2 ;
    for (int i = 1; i <= half; i++) {
        for (int j = 1; j <= (half-i) ; j++) {
            cout << "  " ;
        }
        for (int k = 1; k <= (2*i-1) ; k++) {
            cout << " *" ;
        }
        cout << endl ;
    }
    for (int i = (row-half); i >= 1; i--) {
        for (int j = (half-i) ; j >= 1 ; j--) {
            cout << "  " ;
        }
        for (int k = (2*i-1); k >= 1 ; k--) {
            cout << " *" ;
        }
        cout << endl ;
    }
}
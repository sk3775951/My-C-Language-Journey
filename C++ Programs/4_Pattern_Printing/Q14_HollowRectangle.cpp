// C++ Program to print: the Hollow Reactangle (4x5) - 
// * * * * * 
// *       * 
// *       * 
// * * * * * 

#include <iostream>
using namespace std ;
int main () {
    int row, column ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    cout << "Enter number of column: " ;
    cin >> column ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if (i == 1 or i == row or j == 1 or j == column) {
                cout << "* " ;
            }
            else cout << "  " ;
        }
        cout << endl ;
    }
}
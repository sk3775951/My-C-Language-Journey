// C++ Program to print: the following Pattern (row=3, column=5) - 
// * * * * * 
// * * * * * 
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
            cout << "* " ;
        }
        cout << endl ;
    }
}
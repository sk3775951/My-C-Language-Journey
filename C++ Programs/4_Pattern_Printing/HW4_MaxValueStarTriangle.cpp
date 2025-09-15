// C++ Program to print: the following pattern -
// 4 
// 4 3 
// 4 3 2 
// 4 3 2 1 
// Invert of above pattern:- 
// 4 3 2 1 
// 4 3 2 
// 4 3 
// 4
#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = row; j >= (row-i+1); j--) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    cout << "Invert of above pattern:- " << endl ;
    for (int i = 1; i <= row; i++) {
        for (int j = row; j >= i; j--) {
            cout << j << " " ;
        }
        cout << endl ;
    }
}
// C++ Program to print: the following pattern -
// 4 
// 4 3 
// 4 3 2 
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
    for (int i = 1; i <= row-1; i++) {
        for (int j = row; j >= (row-i+1); j--) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    for (int i = 1; i <= row; i++) {
        for (int k = row; k >= i; k--) {
            cout << k << " " ;
        }
        cout << endl ;      
    }
}
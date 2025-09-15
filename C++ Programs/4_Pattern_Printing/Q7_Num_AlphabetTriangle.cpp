// C++ Program to print: the following Pattern (row=5) - 
// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
            cout << j << " " ;
        }
        cout << endl ;
        }
        else {
            for (int j = 1; j <= i; j++) {
            cout << (char)(j+64) << " " ;
        }
        cout << endl ;
        }
    }
}
// C++ Program to print: the following Pattern (row=4) - 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// A B C D 
// A B C 
// A B 
// A

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row-i+1); j++) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row-i+1); j++) {
            cout << (char)(j+64) << " " ;
        }
        cout << endl ;
    }
}
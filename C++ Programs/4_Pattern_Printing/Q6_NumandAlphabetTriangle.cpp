// C++ Program to print: the following Pattern (row=4) - 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// A 
// A B 
// A B C 
// A B C D 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)(j+64) << " " ;
        }
        cout << endl ;
    }
}
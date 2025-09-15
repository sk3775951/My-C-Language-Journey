// C++ Program to print: the following Pattern (row=4) - 
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 
// A 
// A C 
// A C E 
// A C E G 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (2*i-1); j+=2) {
            cout << j << " " ;
        }
        cout << endl ;
    }
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (2*i-1); j+=2) {
            cout << (char)(j+64) << " " ;
        }
        cout << endl ;
    }
}
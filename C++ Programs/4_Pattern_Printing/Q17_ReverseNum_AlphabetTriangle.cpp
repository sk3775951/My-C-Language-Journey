// C++ Program to print: Reverse Num/Alphabet Triangle pattern (rows=4) - 
//       1 
//     1 2 
//   1 2 3 
// 1 2 3 4 
//       A 
//     A B 
//   A B C 
// A B C D 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row-i); j++) {
            cout << "  " ;
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl ;
    }
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row-i); j++) {
            cout << "  " ;
        }
        for (int k = 1; k <= i; k++) {
            cout << (char)(k+64) << " ";
        }
        cout << endl ;
    }
}
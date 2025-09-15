// C++ Program to print: the following Pattern (row=column=4) - 
// A B C D 
// A B C D 
// A B C D 
// A B C D 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            cout << (char)(j+64) << " " ;
        }
        cout << endl ;
    }
}
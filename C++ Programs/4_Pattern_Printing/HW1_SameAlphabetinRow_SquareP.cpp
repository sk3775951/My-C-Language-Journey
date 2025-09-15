// C++ Program to print: the following Pattern (row=column=4) - 
// A A A A 
// B B B B 
// C C C C 
// D D D D 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row; j++) {
                cout << (char)(64+i) << " " ;
            }
            cout << endl ;
        }
}
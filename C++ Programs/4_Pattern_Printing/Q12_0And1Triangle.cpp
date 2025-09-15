// C++ Program to print: the following pattern - 
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    bool print ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i+j) % 2 == 0) {
                print = true ;
                cout << print << " " ;
            }
            else {
                print = false ;
                cout << print << " " ;
            }
        }
        cout << endl ;
    }
}
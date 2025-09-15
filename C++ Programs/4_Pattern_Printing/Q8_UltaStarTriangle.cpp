// C++ Program to print: following pattern (rows=4) - 
// * * * * 
// * * * 
// * * 
// * 
#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row-i+1); j++) { // (i+j = n+1) i.e. row 1 has 4 columns = No. of rows+1 .
            cout << "* " ;
        }
        cout << endl ;
    }
}
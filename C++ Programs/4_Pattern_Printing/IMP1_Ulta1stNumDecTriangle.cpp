// C++ Program to print: the following pattern (rows=5)-
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1
#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = row; i >= 1; i--) {
        for (int j = i; j >= 1; j--){
            cout << j << " " ;
        }
        cout << endl ;
    }
}
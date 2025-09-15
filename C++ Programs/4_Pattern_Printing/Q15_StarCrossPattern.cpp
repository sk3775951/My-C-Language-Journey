// C++ Program to print: the following pattern (rows = 5) - 
// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            if (i == j or j == (row-i+1)) {
                cout << "* " ;
            }
            else cout <<"  " ;
        }
        cout << endl ;   
    }
}
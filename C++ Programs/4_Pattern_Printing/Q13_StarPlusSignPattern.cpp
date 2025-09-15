// C++ Program to print: Star Plus sign pattern (row=5) - 
//     *     
//     *     
// * * * * * 
//     *     
//     * 
#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    int mid = (row+1)/2 ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            if (i == mid or j == mid){
                cout << "* " ;
            }
            else { cout << "  " ;
            }
        }
        cout << endl ;
    }
}
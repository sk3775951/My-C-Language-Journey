// C++ Program to print: Transpose Of A Given Matrix - 

#include <iostream>
using namespace std ;
int main () {
    int row, column ;
    cout << "Enter the no. of rows: " ;
    cin >> row ;
    cout << "Enter the no. of columns: " ;
    cin >> column ;
    int arr[row][column] ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout <<"Enter the element: arr["<<i<<"] ["<<j<<"] = " ;
            cin >> arr[i][j] ;
        }
    }
    cout << "Given matrix is:\n" ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl ;
    }
    cout << "Transpose of a given matrix is:\n" ;
    for (int j = 0; j < row; j++) {
        for (int i = 0; i < column; i++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl ;
    }
}
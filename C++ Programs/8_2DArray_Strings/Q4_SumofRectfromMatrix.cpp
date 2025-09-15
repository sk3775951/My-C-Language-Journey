// C++ Program to print: the sum of Rectangle formed by co-ordinates(a,b) ; (c,d) in given matrix (rowXcolumn) - 

#include <iostream>
#include <vector>
using namespace std ;
int main () {
    int row, column ;
    cout << "Enter the no. of rows: " ;
    cin >> row ;
    cout << "Enter the no. of columns: " ;
    cin >> column ;
    // vector<vector<int>> arr(row, vector<int>(column));
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
    int a, b, c, d, sum = 0 ;
    cout << "Enter the co-ordinates-(a,b) : " ;
    cin >> a >> b ;
    cout << "Enter the co-ordinates-(c,d) : " ;
    cin >> c >> d  ;
    if (a < 0 || b < 0 || c >= row || d >= column || a > c || b > d) {
    cout << "Invalid coordinates!" << endl;
    return 1; // Exit program if invalid
    }
    for (int i = a; i <= c; i++) {
        for (int j = b; j <= d; j++) {
            sum += arr[i][j] ;
        }
    }
    cout << "Sum of Rectangle formed by co-ordinates(a,b) & (c,d) in given matrix is: " << sum ;
    return 0 ;
}
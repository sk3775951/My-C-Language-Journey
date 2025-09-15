// C++ Program to print: the Floyd's triangle pattern (row=4) - 
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

#include <iostream>
using namespace std ;
int main () {
    int row ;
    cout << "Enter number of rows: " ;
    cin >> row ;
    int a = 1 ;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a << " " ;
            a++ ;
        }
        cout << endl ;
    }
}
// C++ Program to print: the SUM of two Matrices- 

#include <iostream>
using namespace std ;
int main () {
    int arr1[2][4] = {{7,11,6,7},{5,14,4,18}} ;
    int arr2[2][4] = {{11,7,12,11},{13,4,14,0}} ;
    int sum12[2][4] ;
    cout << "The SUM of two given Matrices is:\n" ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            sum12[i][j] = (arr1[i][j] + arr2[i][j]) ;
            cout << sum12[i][j] << " " ;
        } 
        cout << endl ;
    }
}
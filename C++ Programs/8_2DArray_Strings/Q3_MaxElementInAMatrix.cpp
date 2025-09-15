// C++ Program to print: the Maximum Element in a given Matrix - 

#include <iostream>
using namespace std ;
int main () {
    int arr1[][2] = {7,11,6,7,5,14,69,18} ;
    cout << "Given Matrix is:\n" ;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr1[i][j] <<"  " ;
        }
        cout << endl ;
    }
    int maxi = INT32_MIN ;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            maxi = max(maxi,arr1[i][j]) ;
        }
    }
    cout << "Maximum element in the given Array is: " << maxi ;
}
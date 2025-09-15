// C++ Program to print: the Change Value of all odd-Indexed elements to (x2) & all even-Indexed elements to (+10)- 

#include <iostream>
#include <vector>
using namespace std ;

int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    vector<int> arr(n) ; 
    int size = n ;
    cout << "Enter all the Elements of Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << "arr [" << i << "] = " ;
        cin >>  arr[i] ;
    }
    cout << "Updated Elements of above Array: " << endl ;
    for (int i = 0; i < n; i++) {
        if ( i % 2 != 0 ) {
            arr[i] *= 2 ;
            cout << "arr [" << i << "] = " << arr[i] << endl ;
        }
        else {
            arr[i] += 10 ;
            cout << "arr [" << i << "] = " << arr[i] << endl ;
        }
    }
}
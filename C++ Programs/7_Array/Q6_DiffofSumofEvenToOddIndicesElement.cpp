// C++ Program to print: the Difference between Sum of all even-Indexed elements to all odd-Indexed elements - 

#include <iostream>
#include <vector>
using namespace std ;

int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    vector<int> arr(n) ; 
    cout << "Enter all the Elements of Array: " << endl ;
    for (int i = 0; i < n; i++) {
        cout << "arr [" << i << "] = " ;
        cin >>  arr[i] ;
    }
    int oddSum = 0, evenSum = 0 ;
    for (int i = 0; i < n; i++) {
        if ( i % 2 != 0 ) {
            oddSum += arr[i] ;
        }
        else {
            evenSum += arr[i] ;
        }
    }
    cout << "Sum of Elements at even-Indices is: " << evenSum << endl ;
    cout << "Sum of Elements at odd-Indices is: " << oddSum << endl ;
    cout << "Their differences is: " << (evenSum-oddSum) ;
}
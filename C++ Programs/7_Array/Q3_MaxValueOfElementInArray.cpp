// C++ Program to print: Maximum Value Of all Elements of an Array - 

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
    int maximum = INT32_MIN ;
    for (int i = 0; i < n; i++) {
        maximum = max(maximum,arr[i]) ;
        // if (arr[i] > maximum) maximum = arr[i] ;
    }
    cout << "Maximum Value of all Elements in this Array is: "<< maximum ; 
}
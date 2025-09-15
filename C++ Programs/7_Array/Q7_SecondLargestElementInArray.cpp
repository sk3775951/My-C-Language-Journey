// C++ Program to print: the Second Largest Element In anArray - 

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
    int secondMax = INT32_MIN ;
    for (int i = 0; i < n; i++) {
        if (arr[i] != maximum) {
            secondMax = max(secondMax,arr[i]) ;
        }
    }
    cout << "The Second Largest Element in given Array is: " << secondMax ;
}
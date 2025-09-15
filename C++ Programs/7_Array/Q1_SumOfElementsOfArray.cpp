// C++ Program to print: Sum Of all Elements of an Array - 

#include <iostream>
using namespace std ;
int sumFun (int arr[], int size) {
    int sum = 0 ;
    for (int i = 0; i < size; i++) {
        sum += arr[i] ;
    }
    return sum ;
}
int main () {
    int arr[7]  ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout << "Enter all the Elements of Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << "arr [" << i << "] = " ;
        cin >>  arr[i] ;
    }
    cout << "Sum of all Elements of this Array is: "<< sumFun (arr,size) ; 
}
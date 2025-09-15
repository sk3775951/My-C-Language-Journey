// C++ Program to print: Product Of all Elements of an Array - 

#include <iostream>
using namespace std ;
int prodFun (int arr[], int size) {
    int product = 1 ;
    for (int i = 0; i < size; i++) {
        product *= arr[i] ;
    }
    return product ;
}
int main () {
    int arr[5]  ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout << "Enter all the Elements of Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << "arr [" << i << "] = " ;
        cin >>  arr[i] ;
    }
    cout << "Product of all Elements of this Array is: "<< prodFun (arr,size) ; 
}
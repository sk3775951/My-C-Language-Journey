// C++ Program to print: Reverse of elements of given Array without using extra Array - 

#include <iostream>
using namespace std ;
void change (int arr[],int size) {
    int start = 0, end = size-1 ;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end] ;
        arr[end] = temp ;
        start++ ;
        end-- ;
    }
}
int main () {
    int arr[] = {11,7,2005} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout << "Elements of an Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << "\nReverse Elements of given Array: "<< endl ;
    change (arr,size) ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }  
}
// C++ Program to print: Copy of elements of given Array in Reverse Order - 

#include <iostream>
using namespace std ;
void change (int arr[],int newArr[], int size) {
    for (int i = 0; i < size; i++) {
        int j = (size-1)-i ;
        newArr[i] = arr[j] ;
        cout << newArr[i] << " " ;
    }
}
int main () {
    int arr[] = {2,4,7,11,18} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout << size ;
    int newArr[size] ;
    cout << "Elements of an Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << "\nReverse Elements of given Array: "<< endl ;
    change (arr,newArr,size) ;
}
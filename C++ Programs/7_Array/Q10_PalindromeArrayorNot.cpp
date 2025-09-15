// C++ Program to print: Reverse of elements of given Array and check if it's Palindrome or not - 

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
    int arr[] = {3,4,7,4,3} ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
    cout << size ;
    int newArr[size] ;
    cout << "Elements of an Array: " << endl ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << "\nReverse Elements of given Array: "<< endl ;
    change (arr,newArr,size) ;
    bool flag = true ;
    for (int i = 0; i < size; i++) {
        if (arr[i] != newArr[i]) {
            flag = false ;
            break ;
        }
    }
    if (flag)   cout << "\nGiven Array is a Palindrome." ;
    else    cout << "\nGiven Array is not a Palindrome." ;
}
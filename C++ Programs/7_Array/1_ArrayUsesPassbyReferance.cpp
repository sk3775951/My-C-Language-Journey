// C++ Program to print: Array Uses Pass by Referance - 

#include <iostream>
using namespace std ;
void change (int arr[]) {
    int brr [] = {18,11,7,4,2} ;
    for (int i = 0; i < 5; i++) {   // Array Uses- Pass by Referance methodology.
       arr[i] = brr[i] ;
    }  
}
int main () {
    int arr[] = {2,4,7,11,18} ;
    cout << "Elements of Array: " << endl ;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " " ;
    }
    change (arr) ;
    cout << "\nReverse Elements of Array: "<< endl ;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " " ;
    }
}
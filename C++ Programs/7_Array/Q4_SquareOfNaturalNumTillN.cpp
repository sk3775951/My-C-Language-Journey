// C++ Program to print: Square of all Natural Num till N in an Array - 

#include <iostream>
#include <vector>
using namespace std ;
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    vector<int> arr(n) ;  // int arr[n] — It's incorrect & problematic in C++
    // Reason - Variable Length Arrays (VLA) are not standard in C++. In C++, the array size must be a compile-time constant 
    //           unless you use new (dynamic memory) or a standard container like std::vector.
    int size = n ;
    cout << "Square of all Natural Number till" << n <<" stored in Array is:\n" ;
    for (int i = 0; i < size; i++) {
        arr[i] = (i+1)*(i+1) ;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}
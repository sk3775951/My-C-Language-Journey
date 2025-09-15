// C++ Program to print: Even Numbers Between 1 to n - 

#include <iostream>
using namespace std ;
int main () {
    int n, cEven = 0, cOdd = 0;
    cout << "Enter the value of n: " ;
    cin >> n ;
    cout << "Even Numbers are: " ;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            cout << i <<" " ;
            cEven++ ;
        }
    }
    cout << "\nCount of Total Even Numbers: " << cEven ;
    cout << "\nOdd Numbers are: " ;
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            cout << i <<" " ;
            cOdd++ ;
        }
    }
    cout << "\nCount of Total Odd Numbers: " << cOdd ;
}
// C++ Program to print: Table of any number N - 

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "Enter any number N: ";
    cin >> n ;
    cout << "Table of: " << n << endl ;
    for (int i = 1; i <= 10; i++){
        cout << n <<"*" << i << "=" ;
        cout << (n*i) << endl ;
    }
}
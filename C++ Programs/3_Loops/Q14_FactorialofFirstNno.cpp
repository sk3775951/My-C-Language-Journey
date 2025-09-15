// C++ Program to print: the Factorial of First N numbers - 

#include <iostream>
using namespace std ;
int main () {
    int n, fact;
    cout << "Enter any number : " ;
    cin >> n ;
    for (int i = 1; i <= n; i++) {
        fact = 1 ;
        for (int j = i; j >= 1; j--) {
            fact *= j ;
        }
        cout <<i<< "! = " << fact << endl;
    }
}
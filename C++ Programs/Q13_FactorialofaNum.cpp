// C++ Program to print: the Factorial of any number - 

#include <iostream>
using namespace std ;
int main () {
    int n, fact=1;
    cout << "Enter any number : " ;
    cin >> n ;
    while (n > 0) {
        fact *= n ;
        n-- ;
    }
    cout << "Factorial of given number is: " << fact ;
}
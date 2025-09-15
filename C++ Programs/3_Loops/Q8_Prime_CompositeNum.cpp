// C++ Program to print: given number N is Composite or Prime- 

#include <iostream>
using namespace std ;
int main () {
    int n, isComp = 0 ;    // Assume entered number is Prime intially.
    cout << "Enter a number (N): " ;
    cin >> n ;
    for (int i = 2; i <= n/2 ; i++) {
        if (n % i == 0) {
            isComp = 1;
            break ;
        } 
    }
    if (n == 1) {
        cout << "The given number: 1 is Neither Prime nor Composite number.";
    }
    else if (isComp){
        cout << "The given number: "<< n << " is a Composite number.";
    }
    else {
        cout << "The given number: "<< n << " is a Prime number.";
    }
}
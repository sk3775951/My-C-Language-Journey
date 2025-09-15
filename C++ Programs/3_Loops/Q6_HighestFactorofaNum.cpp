// C++ Program to print: Highest factor of a number N (other than N itself)- 

#include <iostream>
using namespace std ;
int main () {
    int n, factor ;
    cout << "Enter a number (N): " ;
    cin >> n ;
    for (int i = 1; i <= n/2 ; i++) {
        if (n % i == 0) {
            factor = i ;
        }  
    }
    cout << "The highest factor of "<< n << " other than itself is: " << factor ;
}
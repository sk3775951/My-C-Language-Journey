// C++ Program to print: Highest factor of a number N (other than N itself) using Break statement- 

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "Enter a number (N): " ;
    cin >> n ;
    for (int i = n/2; i >= 1 ; i--) {
        if (n % i == 0) {
            cout << "The highest factor of "<< n << " other than itself is: " << i ;
            break;
        }  
    }
}
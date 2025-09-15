// C++ Program to print: Odd Number from 1 to N using Continue statement- 

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "Enter a value of N (50/100): " ;
    cin >> n ;
    cout << "Odd numbers between 1 to " <<n<< " is: " ;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue; // It's used to skip the loop for a particular value.
        }
        cout << i << " " ;
    }
}
// C++ Program to print: Sum from 1 to N (Parameterised) - 

#include <iostream>
using namespace std ;
void Sum (int n, int sum) {
    if (n == 0) {
        cout << sum ;
        return ;
    }
    Sum (n-1,sum+n) ;
}
int main () {
    int n ;
    cout << "Enter the value of N: " ;
    cin >> n ;
    cout << "Sum of 1 to " <<n << " is: " ;
    Sum (n,0) ;
}
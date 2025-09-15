// C++ Program to print: value of a^b using Recursion - 

#include <iostream>
using namespace std ;
int powerof (int a, int b) {
    if (b == 0 ) {
        return 1 ;
    }
    else return (a * powerof (a,b-1)) ;
}
int main () {
    int n1, n2 ;
    cout << "Enter the value of a: " ;
    cin >> n1 ;
    cout << "Enter the value of b: " ;
    cin >> n2 ;
    cout << "Power of a^b is: " << powerof (n1,n2) ;
}
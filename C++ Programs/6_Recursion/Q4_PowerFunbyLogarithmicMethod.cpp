// C++ Program to print: value of a^b :: Power Fun. by Logarithmic Method - 

#include <iostream>
using namespace std ;
int powerof (int a, int b) {
    if (b % 2 == 0 ) {
        if (b == 1) return a ;
        else { int x = powerof(a,b/2) ;
            return (x*x) ;
        }  
    }   
    else {
        if (b == 1) return a ;
        else { int y = powerof(a,b/2) ;
            int z = powerof(a,1) ;
            return (y*y*z) ;
        }
    }
}
int main () {
    int n1, n2 ;
    cout << "Enter the value of a: " ;
    cin >> n1 ;
    cout << "Enter the value of b: " ;
    cin >> n2 ;
    cout << "Power of a^b is: " << powerof (n1,n2) ;
}
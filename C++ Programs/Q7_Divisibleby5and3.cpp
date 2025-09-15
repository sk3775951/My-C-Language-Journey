// C++ Program to print: a number is Divisible by 5 and 3 - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if (n % 3 == 0 and n % 5 == 0){  // && <- This operator can be used in place of 'and', same as in C Lang.
        cout << "Given number is Divisible by 5 and 3." ;
    }
    else {
        cout << "Given number is not Divisible by 5 and 3." ;
    }
}
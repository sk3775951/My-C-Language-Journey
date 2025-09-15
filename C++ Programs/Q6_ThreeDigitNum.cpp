// C++ Program to print: a number is 3-Digit Number or not - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if (n > 99 and n < 1000){   // && <- This operator can be used in place of 'and', same as in C Lang.
        cout << "Given number is a 3-Digit Number." ;
    }
    else {
        cout << "Given number is not a 3-Digit Number." ;
    }
}
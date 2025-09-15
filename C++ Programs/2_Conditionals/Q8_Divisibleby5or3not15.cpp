// C++ Program to print: a number is Divisible by 5 or 3 but not by 15 - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if ((n % 3 == 0 or n % 5 == 0) and n % 15 != 0){  // || <- This operator can be used in place of 'or'.
        cout << "Given number is Divisible by 5 or 3 but not by 15." ;
    }
    else {
        cout << "Given number is Divisible by 15 (i.e. divisible by 5 and 3 both)." ;
    }
}
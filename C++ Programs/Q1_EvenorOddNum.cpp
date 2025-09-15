// C++ Program to print: a number is Even or Odd - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if (n % 2 == 0){
        cout << "Given number is EVEN." ;
    }
    else {
        cout << "Given number is ODD." ;
    }
}
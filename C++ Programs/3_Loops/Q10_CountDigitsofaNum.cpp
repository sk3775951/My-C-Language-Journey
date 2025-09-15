// C++ Program to print: the count of Digits of a number - 

#include <iostream>
using namespace std ;
int main () {
    int n, rem, count=0 ;
    cout << "Enter any number : " ;
    cin >> n ;
    while (n > 0) {
        rem = n % 10 ;
        n = n / 10 ;
        count++ ;
    }
    cout << "Total count of digits is: " << count ;
}

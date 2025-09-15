// C++ Program to print: the sum of Digits of any number - 

#include <iostream>
using namespace std ;
int main () {
    int n, rem, sum=0, product=1;
    cout << "Enter any number : " ;
    cin >> n ;
    while (n > 0) {
        rem = n % 10 ;
        n = n / 10 ;
        sum += rem ;
        product *= rem ;
    }
    cout << "Total Sum of Digits is: " << sum ;
    cout << "\nTotal Product of Digits is: " << product ;
}

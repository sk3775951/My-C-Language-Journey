// C++ Program to print: the Reverse of Digits of a number - 

#include <iostream>
using namespace std ;
int main () {
    int n, rem, rev=0; 
    cout << "Enter any number : " ;
    cin >> n ;
    int temp=n ;
    while (temp > 0) {
        rem = temp % 10 ;
        rev = (rev*10) + rem ;
        temp = (temp/10) ;
    }
    cout << "The Reverse of digits is: " << rev << endl ;
    cout << "Sum of given number & its reverse is: " << (n+rev) << endl ;
    if (n == rev){
        cout << "Given number: " <<n<< " is a Palindrome." ;
    }
    else {
        cout << "Given number: " <<n<< " is not a Palindrome." ;
    }
    
}
// C++ Program to print: a number is Divisible by 5 or not - 

#include <iostream>
using namespace std ;
int main () {
    int n;
    cout << "Enter the number: " ;
    cin >> n ;
    if (n % 5 == 0){
        cout << "Given number is Divisible by 5." ;
    }
    else {
        cout << "Given number is not Divisible by 5." ;
    }
}
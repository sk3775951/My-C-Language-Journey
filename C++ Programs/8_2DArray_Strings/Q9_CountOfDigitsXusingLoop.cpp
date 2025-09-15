// C++ Program to print: Total Count of Digits without using Loop - 

#include <iostream>
using namespace std ;
int main () {
    int num ;
    cout << "Enter any number: " ;
    cin >> num ;
    // Int to String Conversion :-
    string str = to_string(num) ;
    cout << "Total Count of Digits in given number: " << str.length() ;
    // String to Int Converson :-
    int num1 = stoi(str) ;
    cout << "\nConverson of String to Int : " << num1*100;
}
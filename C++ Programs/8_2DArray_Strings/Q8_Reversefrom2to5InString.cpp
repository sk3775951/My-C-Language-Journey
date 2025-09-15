// C++ Program to print: Reverse from 2 to 5 of a String - 

#include <iostream>
#include <algorithm>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    cout << "Original String with its size: "<< str << "  " << str.length() <<endl ;
    reverse(str.begin()+2,str.begin()+5) ; // Characters at indexes: 2-4 reverses.
    cout << "Reverse String from 2 to 5 with its size: "<< str << "  " << str.length() <<endl ;
}
// C++ Program to print: the input of a String - 

#include <iostream>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    cout << str << "  ";
    int length = str.length() ;
    cout << length <<endl ;
    // Alternate way to print Array using Indexing of characters
    // for (int i = 0; i < length; i++) {
    //     cout << str[i] ;
    // }
}
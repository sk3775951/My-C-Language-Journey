// C++ Program to print: String with different Operators - 

#include <iostream>
#include <algorithm>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    cout << "Original String with its size: "<< str << "  " << str.length() <<endl ;
    str = str + " Singh " + "Rajput" ;
    cout << "Updated String using '+' operator: "<< str << "  " << str.length() <<endl ;
    reverse(str.begin(),str.end()) ;
    cout << "Updated String using 'reverse' operator: "<< str << "  " << str.length() <<endl ;
}
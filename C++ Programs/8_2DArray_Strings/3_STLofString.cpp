// C++ Program to print: the Standard Template Library of Strings - 

#include <iostream>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    cout << "Original String with its size: "<< str << "  " << str.length() <<endl ;
    str.push_back('a') ;
    cout << "Push/Add Char. to back of original String : " << str << "  " << str.length() <<endl ;
    str.pop_back() ;
    cout << "Pop/Remove Char. from back of original String : "  << str << "  " << str.length() <<endl ;
    str.append(" Singh") ;
    cout << "Add new String at back original String: " << str  << "  " << str.length() <<endl ;
    str.clear() ;
    cout << "Clear the original String: " << str  << "  " << str.length() <<endl ;
}
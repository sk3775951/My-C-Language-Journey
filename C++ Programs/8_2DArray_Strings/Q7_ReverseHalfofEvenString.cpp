// C++ Program to print: Reverse of Half of Even String - 

#include <iostream>
#include <algorithm>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    cout << "Original String with its size: "<< str << "  " << str.length() <<endl ;
    int n = str.length() ;
    reverse(str.begin(),str.begin()+(n/2)) ;
    // int i = 0, j = (str.length()/2)-1 ;
    // while (i < j) {
    //     char temp = str[i] ;
    //     str[i] = str[j] ;
    //     str[j] = temp ;
    //     i++ ;
    //     j-- ;
    // }
    cout << "Half-Reverse String with its size: "<< str << "  " << str.length() <<endl ;
}
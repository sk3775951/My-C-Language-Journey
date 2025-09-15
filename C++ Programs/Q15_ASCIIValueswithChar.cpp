// C++ Program to print: ASCII Values & their respective Characters 
// using While Loop- 

#include <iostream>
using namespace std ;
int main () {
    int n=65 ;
    while (n<=90) {
        cout << n << " - " << (char)n <<endl;
        n++ ;
    }
}
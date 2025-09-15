// C++ Program to print: priority of Modulus {Priority order: /,*,% > +,-}

#include <iostream>
using namespace std ;
int main () {
    int x = 4+2%-8 ;    // {a%-b ~ a%b || -a%b ~ -(a%b)}
    cout << "Answer: " << x ;   // Ans:- x = 4 + (2%-8) = 4+2 = 6
}
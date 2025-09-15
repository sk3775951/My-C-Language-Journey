// C++ Program to create: Calculator which performs all four operations using If Else - 

#include <iostream>
using namespace std ;
int main () {
    int n1, n2 ;
    char op ;
    cin >> n1 ;
    cin >> op ;
    cin >> n2 ;
    cout << "= " ;
    if (op == '+'){
        cout << (n1+n2) ;
    }
    else if (op == '-'){
        cout << (n1-n2) ;
    }
    else if (op == '*'){
        cout << (n1*n2) ;
    }
    else if (op == '/'){
        cout << (n1/n2) ;
    }
    else {
        cout << "Invalid Operator used." ;
    }
}
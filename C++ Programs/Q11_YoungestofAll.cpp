// C++ Program to print: Youngest among Ram, Shyam & Ajay using Nested If Else - 

#include <iostream>
using namespace std ;
int main () {
    float rAge, sAge, aAge ;
    cout << "Enter the Ram's age: " ;
    cin >> rAge ;
    cout << "Enter the Shyam's age: " ;
    cin >> sAge ;
    cout << "Enter the Ajay's age: " ;
    cin >> aAge ;
    if (rAge < sAge){
        if (rAge < aAge) {
            cout << "Ram is the Youngest among other two with age of: "<< rAge ;
        }
        else {
            cout << "Ajay is the Youngest among other two with age of: "<< aAge ;
        }
    }
    else {
        if (sAge < aAge){
            cout << "Shyam is the Youngest among other two with age of: "<< sAge ;
        }
        else {
        cout << "Ajay is the Youngest among other two with age of: "<< aAge ;
        }
    }
}
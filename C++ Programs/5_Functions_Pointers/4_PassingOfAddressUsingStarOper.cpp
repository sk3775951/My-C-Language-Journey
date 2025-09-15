// C++ Program to print: Swap of Two Numbers - 

#include <iostream>
using namespace std ;
void swapM1 (int* a, int* b) {
    int temp = *a ;
    *a = *b ; *b = temp ;
    cout << "Swap two numbers are: " << *a << ", " << *b << endl ;
}
int main () {
    int x , y ;
    cout << "Enter 1st number: " ;
    cin >> x ;
    cout << "Enter 2nd number: " ;
    cin >> y ;
    swapM1 (&x,&y) ;
    cout << x << "," << y << " :- Swaping of x,y in main fun. using */Dereferance operator " 
        "bcz address of each value is passed though Pass by Referance method.\n" ;
}
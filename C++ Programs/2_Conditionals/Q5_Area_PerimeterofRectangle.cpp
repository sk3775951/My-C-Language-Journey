// C++ Program to find: Area & perimeter of rectangle - 

#include <iostream>
using namespace std ;
int main () {
    int l, b ;
    cout << "Enter the value of length: " ;
    cin >> l ;
    cout << "Enter the value of breadth: " ;
    cin >> b ;
    int area = (l*b) , perimeter = 2*(l+b) ;
    cout << "Area of Rectangle is: " << area << endl;
    cout << "Perimeter of Rectangle is: " << perimeter << endl;
    if (area > perimeter){
        cout << "Area of Rectangle is greater than its perimeter.\n" ;
    }
    else {
        cout << "Area of Rectangle is less than its perimeter.\n" ;
    }
}
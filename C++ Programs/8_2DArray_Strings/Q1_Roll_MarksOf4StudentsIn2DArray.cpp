// C++ Program to print: Roll No. & Marks of 4 Students in 2D-Array - 

#include <iostream>
using namespace std ;
int main () {
    int arr[4][2] ; // = {101,95,102,97,103,94,104,98};
    for (int i = 0; i < 4; i++) {
            cout << "Enter the Roll No. of Student- "<<(i+1)<< " = ";
            cin >> arr[i][0] ;
            cout << "Enter the Marks of Student- "<<(i+1)<< " = ";
            cin >> arr[i][1] ;
        }
    cout << "Roll No. & Marks of 4 Students stored in side-by-side manner:\n" ;
    for (int i = 0; i < 4; i++) {
        cout << "Student- "<<(i+1) << ":  " ;
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << "   " ;
        }
        cout << endl ;
    }
} 
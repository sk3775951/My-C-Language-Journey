// C++ Program to find: a point (x,y) lies in which Quadrant, on X/Y-axis or at origin  - 

#include <iostream>
using namespace std ;
int main () {
    int x, y ;
    cout << "Enter the X co-oridnate: " ;
    cin >> x ;
    cout << "Enter the Y co-oridnate: " ;
    cin >> y ;
    if (x > 0) {
        if (y > 0) {
            cout << "Given point lies in 1st Quadrant." ;
        }
        else if (y < 0) {
            cout << "Given point lies in 4th Quadrant." ;
        }
        else {
            cout << "Given point lies on the +X-axis." ;
        }
    }
    else if (x < 0) {
        if (y > 0) {
            cout << "Given point lies in 2nd Quadrant." ;
        } 
        else if (y < 0) {
            cout << "Given point lies in 3rd Quadrant." ;
        }
        else {
            cout << "Given point lies on the -X-axis." ;
        }
    }  

    else if (x == 0) {
        if (y > 0) {
            cout << "Given point lies on the +Y-axis." ;
        }
        else if (y < 0) {
            cout << "Given point lies on the -Y-axis." ;
        }
        else {
            cout << "Given point lies at the origin." ;
        }
    }
}
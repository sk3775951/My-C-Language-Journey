// C++ Program to print: Grade For Percent marks in three Subjects (PCM)- 

#include <iostream>
using namespace std ;
int main () {
    int phy, math, chem ;
    cout << "Enter Marks in Physics out of 100: " ;
    cin >> phy ;
    cout << "Enter Marks in Chemistry out of 100: " ;
    cin >> chem ;
    cout << "Enter Marks in Maths out of 100: " ;
    cin >> math ;
    int tPercent = (phy+chem+math)/3 ;
    if (tPercent >= 81 and tPercent <= 100) {
        cout << "Total percentage in PCM is: " << tPercent << "\nRemark: Very Good";
    }
    else if (tPercent >= 61) {
        cout << "Total percentage in PCM is: " << tPercent << "\nRemark: Good";
    }
    else if (tPercent >= 41) {
        cout << "Total percentage in PCM is: " << tPercent << "\nRemark: Average";
    }
    else {
        cout << "Total percentage in PCM is: " << tPercent << "\nRemark: Fail !!";
    }
}
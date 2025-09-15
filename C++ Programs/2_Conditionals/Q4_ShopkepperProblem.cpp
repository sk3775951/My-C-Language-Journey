// C++ Program to print: Profit made/ Loss incurred by shopkepper - 

#include <iostream>
using namespace std ;
int main () {
    int cp, sp ;
    cout << "Enter the Cost Price: " ;
    cin >> cp ;
    cout << "Enter the Selling Price: " ;
    cin >> sp ;
    if (sp > cp){
        cout << "Profit made by Shopkepper is: " << (sp-cp) ;
    }
    else if (sp < cp){
        cout << "Loss incurred by Shopkepper is: " << -(sp-cp) ;
    }
    else{
        cout << "Neither Profit made nor Loss incurred by Shopkepper." ;
    }
}
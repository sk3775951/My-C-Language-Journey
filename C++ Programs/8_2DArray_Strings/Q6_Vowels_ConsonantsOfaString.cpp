// C++ Program to print: Total Vowels & Consonants in a given String - 

#include <iostream>
using namespace std ;
int main () {
    string str ;
    cout << "Enter a string: " ;
    getline(cin,str) ;
    int length = str.length() ;
    cout << str << "  " << length <<endl ;
    int vowels=0, consonants=0 ;
    for (int i = 0; i < length; i++) {
        if (str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'O' or str[i] == 'U' or
        str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u') {
            vowels++ ;
        }
        else if (str[i] >= 65 and str[i] <= 90 or str[i] >= 97 and str[i] <= 122) {
            consonants++ ;
        }
        else continue; 
    }
    cout << "Total Vowels in given Array is: " <<vowels << endl ;
    cout << "Total Consonants in given Array is: " <<consonants ;
}
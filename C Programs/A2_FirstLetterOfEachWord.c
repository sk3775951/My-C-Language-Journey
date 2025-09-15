// C Program to print the First Letter of Each Word - 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main () {
    char str[] = "High Definition Multimedia Interface" ;
    int length = strlen(str) ;
    bool readWord = false ;
    for (int i = 0; i < length; i++) {
        if (!readWord && isalpha(str[i])) {
            readWord = true ;
            printf ("%c",str[i]) ;
        }
        else if (readWord && !isalpha(str[i])) {
            readWord = false ;
        } 
    }  
return 0;
}
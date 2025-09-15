// C Program to check- Palindrome or Not using String

#include <stdio.h>
#include <string.h>
int main () {
    char str[50] ;
    printf ("Enter a string:") ;
    gets(str) ;
    char rev[50] ;
    strcpy(rev,str) ;
    strrev(rev) ;
    if (strcmpi(rev,str) == 0) {
        printf ("The given String is Palindrome.") ;
    }
    else {
        printf ("The given String is not Palindrome.") ;
    }
return 0;
}
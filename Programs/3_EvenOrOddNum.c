// C Program to find out: if Number is Even or Odd- 

#include <stdio.h>

int main () {
    int Num ;
    printf ("Enter any Number to check if Number is Even or Odd- ") ;
    scanf ("%d",&Num) ;
    if (Num % 2 == 0) {
        printf ("The given number: %d is EVEN.",Num) ;
    }
    else {
        printf ("The given number: %d is ODD.",Num) ;
    }
return 0;
}
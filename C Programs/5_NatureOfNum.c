// C Program to check whether the Number is +ve, -ve or zero. 

#include <stdio.h>

int main () {
    int Num ;
    printf ("Enter any Number to check its Nature: ") ;
    scanf ("%d",&Num) ;
    if (Num > 0) {
        printf ("The given Number: %d is Positive.",Num) ;
    }
    else if (Num < 0) {
        printf ("The given Number: %d is Negative.",Num) ;
    }
    else {
        printf ("The given Number: %d is Zero.",Num) ;
    }
    
return 0;
}
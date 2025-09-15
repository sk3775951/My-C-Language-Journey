// C Program to print result of : {(A+B) + (B*C)} / 2 -

#include <stdio.h>

int main () {
    int A, B, C ;
    printf ("Enter the value of A: ") ;
    scanf ("%d",&A) ;
    printf ("Enter the value of B: ") ;
    scanf ("%d",&B) ;
    printf ("Enter the value of C: ") ;
    scanf ("%d",&C) ;
    float X = {(A+B)/2.0 + (B*C)/2.0} ;
    printf ("The result of : {(%d+%d) + (%d*%d)} / 2 : %.2f",A,B,B,C,X) ;
return 0;
}
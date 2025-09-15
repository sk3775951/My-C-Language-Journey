// C Program to Add two numbers & print its sum-

#include <stdio.h>

int main () {
    int a, b, sum ;
    printf ("Enter two Numbers to find its Sum-\n") ;
    printf ("Enter 1st number:") ;
    scanf ("%d",&a) ;
    printf ("Enter 2nd number:") ;
    scanf ("%d",&b) ;
    sum = (a+b) ;
    printf ("Sum of two numbers:- %d + %d = %d",a,b,sum) ;
return 0;
}
// C Program to calculate : factorial of any number -

#include <stdio.h>
int Factorial (int Num) {
    int fact = 1 ;
    if (Num == 0 || Num == 1) {
        return fact ;
    }
    else {
        fact = Num * Factorial (Num-1) ;
        return fact ;
    }
}
int main () {
    int Num ;
    printf ("Enter any number to finds its Factorial value: ") ;
    scanf ("%d",&Num) ;
    if (Num >= 0) {
        printf ("The Factorial of %d is: %d",Num,Factorial(Num)) ;
    }
    else {
        printf ("Factorial isn't defined for negative numbers.") ;
    }
return 0;
}
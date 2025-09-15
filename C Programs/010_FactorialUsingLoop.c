// C Program to find: Factorial of a number using Loop-

#include <stdio.h>
int main () {
    int Num, fact=1 ;
    printf ("Enter a number to find- its Factorial: ") ;
    scanf ("%d",&Num) ;
    if (Num == 0 || Num == 1) {
        printf ("Factorial of %d is: %d",Num,fact) ;
    }
    else {
        for (int i = Num; i > 1; i--){
            fact = (fact * i) ;
        }
        printf ("Factorial of %d is: %d",Num,fact) ;
    }
return 0;
}
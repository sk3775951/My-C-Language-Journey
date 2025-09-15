// C Program to check whether given number is Palindrome or not-

#include <stdio.h>
int main () {
    int Num, rem, revNo=0 ;
    printf ("Enter any number to check whether it is Palindrome or not: ") ;
    scanf ("%d",&Num) ;
    int tempN = Num ;
    do { rem = tempN % 10 ;
        revNo = (revNo*10) + rem ;
        tempN = tempN/10 ;
    } while (tempN > 0);
    // printf ("%d\n",revNo) ;
    // printf ("%d\n",tempN) ;
    if (Num == revNo) {
        printf ("The number: %d is a Palindrome.",Num) ;
    }
    else {
        printf ("The number: %d is not a Palindrome.",Num) ;
    }
return 0;
}
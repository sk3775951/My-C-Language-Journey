// C Program to check whether given number is Armstrong or not- 

#include <stdio.h>
#include <math.h>
int main () {
    int Num, digit=0 ; 
    float rem, sum=0 ;
    printf ("Enter any number to check whether it is Armstrong or not: ") ;
    scanf ("%d",&Num) ;
    int temp1 = Num, temp2 = Num;
    do { temp1 = temp1/10 ;
        digit++ ;
    } while (temp1 > 0);
    // printf ("%d\n",digit) ;
    for (int i = 0; i < digit ; i++) {
        rem = temp2 % 10 ;
        sum = sum + pow (rem,digit) ;
        temp2 = temp2/10 ;
    }
    printf ("%.1f\n",sum) ;
    if (Num == sum) {
        printf ("The number: %d is an Armstrong.",Num) ;
    }
    else {
        printf ("The number: %d is not an Armstrong.",Num) ;
    }
return 0;
}
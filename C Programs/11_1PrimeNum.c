// C Program to check whether: a number is Prime Number or not- 

#include <stdio.h>
int main () {
    int N, isPrime = 1; // Assume given no. is prime intially 
    printf ("Enter a number to check whether: it is Prime No. or not: ") ;
    scanf ("%d",&N) ;
    if (N <= 1){
        isPrime = 0 ;
    }
    else {
        for (int i = 2; i <= N/2 ; i++){
            if (N % i == 0){
                isPrime = 0 ;
                break;
            }
        }
    }
    if (isPrime == 1) {    
        printf ("Given number: %d is a Prime number.",N) ;
    }
    else {    
        printf ("Given number: %d isn't a Prime number.",N) ;
    }
return 0;
}
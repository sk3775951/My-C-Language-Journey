// C Program to find sum of series: 1^1 + 2^2 + 3^3 +...+ N^N

#include <stdio.h>
#include <math.h>
int main () {
    int N, sum=0 ;
    printf ("Enter the Number- ");
    scanf ("%d",&N) ;
    for (int i = 1; i <= N; i++){
        sum = sum + pow(i,i) ;
    }
    printf ("Sum of given series upto %d terms is: %d",N,sum) ;
return 0;
}
// C Program to print Fibonacci Series- 0 1 1 2 3 5 8 13 21 34 55 89 ...

#include<stdio.h>
int main () {
    int n,first = 0,second = 1,sum=0 ;
    printf ("Enter number of terms to print in Fibonacci Series: ") ;
    scanf ("%d",&n) ;
    for (int i = 0; i < n; i++){
       printf ("%d ",first) ;
       sum = first + second ;
       first = second ;
       second =  sum ;
    }
return 0 ;
}
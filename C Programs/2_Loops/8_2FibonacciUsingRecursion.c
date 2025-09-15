// C Program to print Fibonacci Series- 0 1 1 2 3 5 8 13 21 34 55 89 ...

#include<stdio.h>
int Fibonacci(int N) {
    if (N == 0 || N == 1){
        return N ;
    }
    else {
        return Fibonacci(N-1) + Fibonacci(N-2) ;
    }
}

int main () {
    int N ;
    printf ("Enter number of terms to print in Fibonacci Series: ") ;
    scanf ("%d",&N) ;
    for (int i = 0; i < N; i++){
        printf ("%d ",Fibonacci(i)) ;
    }
return 0 ;
}
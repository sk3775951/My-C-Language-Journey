// C Program to check whether: a number is Prime Number or not- 

#include <stdio.h>

int main () {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int count = 0 ;
    for (int i = 2; i <= N; i++) {
        int isPrime = 1; 
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                count++ ;
                break;  
            }
    }
    if (isPrime == 1) {
        printf("%d ", i);
    }
}
    printf ("\nTotal prime Numbers is: %d",N-count-1) ;
return 0;
}
// Project 01 - Guess the Number Game !!

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main () {
        int number , guess , nguess =1 ;
        srand ( time (0)) ;
        number = rand ()%100 +1 ; // Random number generates from 1 to 100 .
//      printf ("The random number is %d\n", number) ;
        
        do { printf ("Guess the number between 1 to 100 : \n") ;
             scanf ("%d", &guess) ;
         if (guess > number) { printf ("Hint :- Think of Lower Number .\n") ;
    }    
         else if (guess < number) { printf ("Hint :- Think of Higher Number .\n") ; 
    }    
         else { printf ("Your guess the number (%d) in %d Attempts !! \n" , number , nguess) ;
    }    
         nguess++ ;
    }    
        while (guess !=number) ;
            
return 0 ;
}

// C Program to print the following: Number pattern -
//       1 
//      1 2 
//     1 2 3 
//    1 2 3 4 
//   1 2 3 4 5 
//  1 2 3 4 5 6 
// 1 2 3 4 5 6 7 

#include <stdio.h>
int main () {
    int rows ;
    printf ("Enter the value of rows:") ;
    scanf ("%d",&rows) ;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
           printf (" ") ;
        } 
        for (int k = 1; k <= i; k++)
        {
            printf ("* ") ;  // printf ("* ") ; -> For char- '*' Pattern Printing
        }
        printf ("\n") ;
    }
return 0;
}
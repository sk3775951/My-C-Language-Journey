// A
// BB 
// CCC
// DDDD
// EEEEE

#include <stdio.h>
int main () {
    int rows ;
    printf ("Enter the value of rows:") ;
    scanf ("%d",&rows) ;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j< i; j++)
        {
            printf ("%c",64+i) ;
        }
        printf ("\n") ;
    }
return 0;
}
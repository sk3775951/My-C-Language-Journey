// C Program to print the following: Number pattern -
//             1
//            12
//           123
//          1234
//         12345
//        123456
//       1234567
//      12345678
//     123456789
//   12345678910
// 1234567891011

#include <stdio.h>
int main () {
    int rows ;
    printf ("Enter the value of rows:") ;
    scanf ("%d",&rows) ;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j > i; j--)
        {
            if (j < 10) {       // Skip this for char- '*' Pattern Printing
                printf (" ") ;
            }
            else {
                printf ("  ") ;
            }
        } 
        for (int k = 1; k <= i; k++)
        {
            printf ("%d",k) ;   // Put Space after %d for Equilateral Triangle Pattern
        }
        printf ("\n") ;
    }
return 0;
}
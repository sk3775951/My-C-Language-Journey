// C Program to convert given temp. into C & F temp-

#include <stdio.h>
int main () {
    int temp ;
    printf ("Enter the value of Temperature: ") ;
    scanf ("%d",&temp) ;
    float F = (9*temp/5.0)+32 ;
    printf ("The %d C temp into F is: %.2f\n",temp,F) ;
return 0;
}
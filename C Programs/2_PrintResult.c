// C Program to print result of: (a+b)x(c+d)

#include <stdio.h>

int main () {
    int a, b, c, d, result ;
    printf ("Enter the value of : a, b, c & d - ") ;
    scanf ("%d %d %d %d",&a,&b,&c,&d) ;
    result = (a+b)*(c+d) ;
    printf ("The result of: (a+b)x(c+d) is- %d",result) ;
return 0;
}
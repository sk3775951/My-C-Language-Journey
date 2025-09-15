// C program to find: Greatest among three numbers-a,b & c 

#include <stdio.h>
int main () {
    int a,b,c ;
    printf ("Enter the 1st Number- ");
    scanf ("%d",&a) ;
    printf ("Enter the 2nd Number- ");
    scanf ("%d",&b) ;
    printf ("Enter the 3rd Number- ");
    scanf ("%d",&c) ;
    if (a>b && a>c) {
            printf ("The Greatest Number among %d, %d & %d is- %d",a,b,c,a) ;
        }
    else if (b>a && b>c) {
            printf ("The Greatest Number among %d, %d & %d is- %d",a,b,c,b) ;
        }
    else {
        printf ("The Greatest Number among %d, %d & %d is- %d",a,b,c,c) ;
    }
return 0;
}
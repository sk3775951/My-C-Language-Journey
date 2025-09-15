// C Program to find: roots of Quadratic Equation for all cases of D

#include <stdio.h>
#include <math.h>
int main () {
    int a, b, c, D ; 
    float r1, r2  ;
    printf ("Enter the coefficients of Quadratic equation of form: ax^2 + bx + c = 0\n") ;
    printf ("Enter the value of a:") ;
    scanf ("%d",&a) ;
    printf ("Enter the value of b:") ;
    scanf ("%d",&b) ;
    printf ("Enter the value of c:") ;
    scanf ("%d",&c) ;
    D = (pow(b,2) - 4*a*c) ;
    if (D>0){
        printf ("D>0 :- Real and Distinct roots\n") ;
        r1 = (-b + sqrt(D)) / (2.0*a) ;
        r2 = (-b - sqrt(D)) / (2.0*a) ;
        printf ("1st Real root is: %.1f\n",r1) ;
        printf ("2nd Real root is: %.1f\n",r2) ;
    }
    else if (D==0){
        printf ("D=0 :- Real and Equal roots\n") ;
        r1 = -b / (2.0*a);
        r2 = -b / (2.0*a);
        printf ("1st Real root is: %.1f\n",r1) ;
        printf ("2nd Real root is: %.1f\n",r2) ;
    }
    else {
        printf ("D<0 :- Imaginary roots\n") ;
        r1 = -b / (2.0 * a);
        r2 = sqrt(-D) / (2.0 * a);
        printf("1st Imaginary root: %.1f + %.1fi\n", r1, r2);
        printf("2nd Imaginary root: %.1f - %.1fi\n", r1, r2);
    }
return 0;
}
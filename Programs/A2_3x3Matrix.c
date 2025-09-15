// C Program to store data in 3*3 matrix and add all the diagonal elements- 

#include <stdio.h>
int main () {
    int arr[3][3] ;
    int sum=0 ;
    printf ("Enter the elements in 3*3 matrix:\n") ;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf ("%d",&arr[i][j]) ;
        }   
    }
    printf ("Given 3*3 matrix is:\n") ;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf ("%d ",arr[i][j]) ;
        } 
        printf ("\n") ;  
    }
    for (int i = 0; i < 3; i++){
        sum += arr[i][i] ;
    }
    printf ("Sum of diagonal elements is: %d",sum) ;  
return 0;
}
// C Program for: Bubble Sort algorithm in Descending order- 

#include <stdio.h>
int main () {
    int arr[] = {4,3,8,9,2} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    int temp , count = 0 ;
    printf ("Original array: ") ;
    for (int i = 0; i < n; i++){
        printf ("%d ",arr[i]) ;
    }
    printf ("\n") ;
    for (int i = 0; i < n; i++){   
    count = 0 ;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){     // Only '>' becomes '<' for swaping in Descending order
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                count = 1 ;
            }   
        }
        if (count == 0){
            break;
        }
    }
    printf ("Sorted array: ") ;
    for (int i = 0; i < n; i++){
        printf ("%d ",arr[i]) ;
    }
return 0;
}
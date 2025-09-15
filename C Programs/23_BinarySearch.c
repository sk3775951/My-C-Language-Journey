// C Program for Binary Search algorithm - 

#include <stdio.h>
int bubbleSort (int arr[], int n) {
    int temp , count ;
    printf ("Original array: ") ;
    for (int i = 0; i < n; i++){
        printf ("%d ",arr[i]) ;
    }
    printf ("\n") ;
    for (int i = 0; i < n-1; i++){   
    count = 0 ;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
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

int main () {
    int arr[] = {4,3,1,9,2} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    bubbleSort (arr,n) ;
    int sArr[5] ;
    for (int i = 0; i < n; i++){
        sArr[i] = arr [i] ;
    }
    int l=0, r=n-1, mid=0, target ;
    printf ("\nEnter the search element: ") ;
    scanf ("%d",&target) ;
    int found = 0 ;
    while (l <= r){
        mid=(l+r)/2 ;
        if (target > sArr[mid]){
            l = mid+1 ;
        }
        else if (target < sArr[mid])
        {
            r = mid-1 ;
        }
        else { found = 1; 
            break;
        }  
    }
    if (found == 1) {
        printf ("Searched element is at %d index in Sorted Array.",mid) ;
    }
    else {
        printf ("Searched element doesn't belong to this array.") ;
    }
return 0;
}


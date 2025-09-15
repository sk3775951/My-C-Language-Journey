// C Program for Binary Search algorithm for Sorted Array only- 

#include <stdio.h>
int main () {
    int sArr[] = {2,3,4,7,9} ;  // For Sorted Array only
    int n = sizeof(sArr)/sizeof(sArr[0]) ;
    int l=0, r=n-1, mid=0, target ;
    printf ("Original array: ") ;
    for (int i = 0; i < n; i++){
        printf ("%d ",sArr[i]) ;
    }
    printf ("\n") ;
    printf ("Enter the search element: ") ;
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

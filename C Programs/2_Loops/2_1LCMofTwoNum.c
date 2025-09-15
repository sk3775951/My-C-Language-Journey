#include<stdio.h>
int main(){
    int n1,n2,LCM;
    printf("Enter the 1st number : ");
    scanf("%d",&n1);
    printf("Enter the 2nd number : ");
    scanf("%d",&n2);
    int max=n2 , min=n1 ;
    if (n1>n2) {
        max = n1 ; min = n2 ;
    }
    for(int i=1;i<=min;i++){
        LCM=i*max;
        if( LCM%min==0 ) 
        break;
    }
    printf("LCM is : %d",LCM);
return 0;
}
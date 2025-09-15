#include<stdio.h>
int main (){
    int n1,n2,i;
    printf("Enter the 1st number : ");
    scanf("%d",&n1);
    printf("Enter the 2nd number : ");
    scanf("%d",&n2);
    int large = n2;
    if (n1>=n2) { large=n1;
    }
    for(i=large;i>=1;i--){
        if(n1%i==0 && n2%i==0) 
        break;
    }
    printf("HCF is : %d",i);
    return 0;
}   
//  LCM of Two Numbers

#include <stdio.h>
int main () {
    int a,b,max,lcm=1 ;
    scanf ("%d %d",&a,&b) ;
    if (a > b) {
        max = a ;
    }
    else { max = b ;
    }
    for (int i = max; i <= (a*b); i++) {
        if (i%a == 0 && i%b == 0) {
            lcm = lcm*i ;
            break ;
        }  
    }
    printf ("%d",lcm) ;
return 0;
}
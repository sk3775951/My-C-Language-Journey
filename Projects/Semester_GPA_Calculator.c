// C Program to calulate SGPA for Semester-1 

#include <stdio.h>
int marks[10],GP[10] ;
int semGP1(),semGP2() ;
int main () {
   int netGP[10] ; // Allocating ten values using Array
   float finalGPA = 0 ;
   printf ("Enter the Marks you got in Engg. Maths out of 100:- ") ;
   scanf ("%d", &marks[0]) ;
   printf ("Enter the Marks you got in Engg. Physics out of 100:- ") ;
   scanf ("%d", &marks[1]) ;
   printf ("Enter the Marks you got in IIT out of 100:- ") ;
   scanf ("%d", &marks[2]) ;
   printf ("Enter the Marks you got in BEE out of 100:- ") ;
   scanf ("%d", &marks[3]) ;
   printf ("Enter the Marks you got in English out of 100:- ") ;
   scanf ("%d", &marks[4]) ;
   printf ("Enter the Marks you got in Graphics out of 50:- ") ;
   scanf ("%d", &marks[5]) ;
   printf ("Enter the Marks you got in Physics Lab out of 50:- ") ;
   scanf ("%d", &marks[6]) ;
   printf ("Enter the Marks you got in BEE Lab out of 50:- ") ;
   scanf ("%d", &marks[7]) ;
   printf ("Enter the Marks you got in HVE out of 50:- ") ;
   scanf ("%d", &marks[8]) ;
   printf ("Enter the Marks you got in NSS out of 50:- ") ;
   scanf ("%d", &marks[9]) ;
   
   semGP1() ;
   for (int i=0; i<2 ; i++) { 
      netGP[i]=GP[i]*4 ;
   }
   semGP1() ;
   for (int i=2; i<5 ; i++) {
      netGP[i]=GP[i]*3 ;  
   }
   semGP2() ;
   for (int i=5; i<6 ; i++) {
      netGP[i]=GP[i]*3 ; 
   }
   semGP2() ;
   for (int i=6; i<10 ; i++) {
      netGP[i]=GP[i]*1 ;  
   }
   for (int i=0; i<10 ; i++) { finalGPA += netGP[i] ;
   }
   printf ("Congrats; You have scored :- %.2f SGPA in Semester-1",finalGPA/24) ;
return 0;
}

int semGP1() { for (int i=0; i<5 ; i++) {
   if (marks[i]<0 || marks[i]>100) {
   printf ("Invalid Marks entered !!!\n") ;
   return 1 ;
   }
   if (marks[i]%10 == 0) { GP[i]=marks[i]/10 ;
      }
   if (marks[i]%10 != 0) { GP[i]=(marks[i]+10)/10 ;
      }  
   if (GP[i]<5) { printf ("Invalid GPA for subject-%d !!!\n",i+1) ;
   return 1 ;
      }
   }
return 0 ;
}

int semGP2() { for (int i=5; i<10 ; i++) {
   if (marks[i]<0 || marks[i]>50) {
   printf ("Invalid Marks entered !!!\n") ;
   return 1 ;
   }
   else if (marks[i]%10 == 0) { GP[i]=marks[i]/5 ;
      }
   else { GP[i]=(marks[i]+5)/5 ;
      }
   if (GP[i]<5) { printf ("Invalid GPA for subject-%d !!!\n",i+1) ;
   return 1 ;
      } 
   } 
return 0 ;
}
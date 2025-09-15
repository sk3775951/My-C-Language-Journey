// C Program to store 10 students: Name, Roll No, Branch & display all using Structures-

#include <stdio.h>
struct StudentInfo {
    char name[50] ;
    int rollNo ;
    char branch[20] ;
};

int main () {
    struct StudentInfo S[2] ;
    printf ("Enter Student Info:\n") ;
    for (int i = 0; i < 2; i++) {
        printf ("Enter Student-%d Name: ",i+1) ;
        scanf ("%s",&S[i].name) ;
        printf ("Enter Student-%d Roll No: ",i+1) ;
        scanf ("%d",&S[i].rollNo) ;
        printf ("Enter Student-%d Branch: ",i+1) ;
        scanf ("%s",&S[i].branch) ;
    }
    printf ("\nStudents Records:-\n") ;
    for (int i = 0; i < 2; i++) {
        printf ("Student-%d Name: %s\n", i+1, S[i].name) ;
        printf ("Student-%d Roll No: %d\n", i+1, S[i].rollNo) ;
        printf ("Student-%d Branch: %s\n", i+1, S[i].branch) ;
    }
return 0;
}
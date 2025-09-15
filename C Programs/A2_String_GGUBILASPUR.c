// C Program to count the length, vowels & consonants of string: "GGUBILASPUR"

#include <stdio.h>
#include <string.h>
int main () {
    char str[] = "GGUBILASPUR" ;
    int length = strlen(str) ;
    int vowels = 0 , consonants = 0 ;
    for (int i = 0; i < length; i++) {
        if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowels++ ;
        }
        else if (str[i]>= 65 && str[i]<= 90) {
            consonants++ ;
        }
    }
    printf ("The count of the length of string- GGUBILASPUR is:%d\n",length) ;
    printf ("The count of the vowels of string- GGUBILASPUR is:%d\n",vowels) ;
    printf ("The count of the consonants of string- GGUBILASPUR is:%d\n",consonants) ;
return 0;
}
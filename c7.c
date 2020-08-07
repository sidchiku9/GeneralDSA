#include<stdlib.h>
#include<stdio.h>

#define max_size 1000

int main(){
    char strOne[max_size] , strTwo[max_size] ;
    int i, j;

    printf("Enter the first string : \n");
    gets(strOne);

    printf("Enter the secong string : \n");
    gets(strTwo);

    i = 0 ;

    while(strOne[i] != '\0'){
        i++;
    }

    j = 0 ;

    while(strTwo[j] != '\0'){
        strOne[i] = strTwo[j];
        i++ ;
        j++ ;
    }

    strOne[i] = '\0';

    printf("Concateneated string : %s\n",strOne);

    return 0;
}
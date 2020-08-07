#include<stdlib.h>
#include<stdio.h>

#define max_size 100

int main(){
    char strOne[max_size], strTwo[max_size];
    int i, sizeOne, sizeTwo, yes;

    sizeOne = 0;
    sizeTwo = 0;
    yes = 0;

    printf("Enter the first string : \n");
    gets(strOne);

    printf("Enter the second string : \n");
    gets(strTwo);

    i = 0;

    while(strOne[i] != '\0'){
    	sizeOne++ ;
    	i++;
    }

    i = 0;

    while(strTwo[i] != '\0'){
    	sizeTwo++ ;
    	i++;
    }

    if(sizeOne != sizeTwo){
    	printf("The strings aren't the same\n");
    }
    else{
    	for(i = 0 ; i < sizeOne ; i++){
    		if(strOne[i] == strTwo[i])
    			yes++;
    	}
    }

    if(yes == sizeOne){
    	printf("The strings are equal. \n");
    }
    else{
    	printf("The strings aren't equal. \n");
    }

    return 0;

}
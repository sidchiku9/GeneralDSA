#include<stdlib.h>
#include<stdio.h>

#define max_size 100

int main(){
    char strOne[max_size], strTwo[max_size];
    int i, sizeOne, sizeTwo, yes, specialOne, specialTwo;

    specialOne = 0;
    specialTwo = 0;
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

    if(sizeOne == 0  && sizeTwo == 0){
    	printf("Both strings are null strings\n");
    }
    else if(sizeOne == 0){
    	printf("String One is a null string \n");
    }
    else if(sizeTwo == 0){
    	printf("String Two is a null string \n");
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

    for(i = 0 ; i < sizeOne ; i++){
    	if(strOne[i] == '!' || strOne[i] == '@' || strOne[i] == '#' || strOne[i] == '$' || strOne[i] == '&'){
    		specialOne++;
    	}
    }

    for(i = 0 ; i < sizeTwo ; i++){
    	if(strTwo[i] == '!' || strTwo[i] == '@' || strTwo[i] == '#' || strTwo[i] == '$' || strTwo[i] == '&'){
    		specialTwo++;
    	}
    }

    if(specialOne > 0){
    	printf("String One has special characters.\n");
    }
    else{
    	printf("String One has no special characters.\n");
    }

    if(specialTwo > 0){
    	printf("String Two has special characters.\n");
    }
    else{
    	printf("String Two has no special characters.\n");
    }

    return 0;

}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, i, evenCount, oddCount;
    evenCount = 0;
    oddCount = 0;

    printf("Enter the number till which you want to segregate \n");
    scanf("%d",&num);

    for(i = 0 ; i < num ; i++){
        if(i % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    int evenNum[evenCount], oddNum[oddCount];
    evenCount = 0;
    oddCount = 0;

    for(i = 0 ; i < num ; i++){
        if(i % 2 == 0){
            evenNum[evenCount] = i;
            evenCount++;
        }
        else{
            oddNum[oddCount] = i;
            oddCount++;
        }
    }

    printf("The even numbers are : \n");
    for(i = 0 ; i < evenCount ; i++){
        printf("%d ",evenNum[i]);
    }

    printf("\nThe odd numbers are : \n");
    for(i = 0 ; i < oddCount ; i++){
        printf("%d ",oddNum[i]);
    }
    printf("\n");

    return 0;
}
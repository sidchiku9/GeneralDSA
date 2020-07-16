#include<stdlib.h>
#include<stdio.h>

int main(){
    printf("How many elements do you want in your array ? \n");
    int size, i, choice;
    scanf("%d",&size);

    int num, arr[size];

    printf("Start entering array elements : \n");

    for(i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    choice = 1;

    do{
    printf("Which element do you want to search for in your array ? \n");
    scanf("%d",&num);

    for(i = 0 ; i < size ; i++){
        if(num == arr[i]){
            break;
        }
    }

    if(i < size){
        printf("Element found at %d location \n",i+1);
    }
    else{
        printf("Element not found. \n");
    }

    printf("If you want to search for more array element enter any other number than 0 \n");
    scanf("%d",&choice);
    }while(choice != 0);

    return 0;
}
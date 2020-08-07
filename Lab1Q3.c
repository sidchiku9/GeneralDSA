#include<stdio.h>
#include<stdlib.h>

void asc(int arr[], int size);

int main(){
    int size, choice, i;

    printf("How many elements do you want in your array ? \n");
    scanf("%d",&size);

    int arr[size];

    printf("Start entering the array elements : \n");
    
    for(i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    asc(arr,size);

    do{
        printf("Enter '1' to find the MAXIMUM element of the array \n");
        printf("Enter '2' to find the MINIMUM element of the array \n");
        printf("ENter '3' to end the program \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1 :
            printf("The maximum element of the array is %d \n",arr[size-1]);
            break;
        
        case 2 : 
            printf("The minimum element of the array is %d \n",arr[0]);
            break;

        case 3 :
            exit(0);

        default:
            printf("Wrong input. Please try again. \n");
            break;
        }

    }while(choice != 3);

    return 0;
}

void asc(int arr[], int size){
    int i, j, temp;
    for(i = 0 ; i < size ; i++){
        for(j = i + 1 ; j < size ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
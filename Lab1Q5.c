#include<stdlib.h>
#include<stdio.h>

void asc(int arr[], int n);
void desc(int arr[], int n);
void printarr(int arr[],int size);

int main(){
    int choice, size, i;

    printf("How many elements do you want in your array ? \n");
    scanf("%d", &size);

    int arr[size];

    printf("Start entering array elements : \n");
    for(i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    do{
        printf("Enter '1' to SORT the array in ASC order \n");
        printf("Enter '2' to SORT the array in DESC order \n");
        printf("Enter '3' to END the program \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            asc(arr,size);
            printarr(arr, size);
            break;

        case 2:
            desc(arr,size);
            printarr(arr, size);
            break;

        case 3:
            exit(0);
            break;
        
        default:
            printf("Wrong input. Please try again. \n");
            break;
        }

    }while(choice != 3);

    return 0;
}

void asc(int arr[],int n){
    int i, j, temp;

    for(i = 0 ; i < n ; i++){
        for(j = i + 1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void desc(int arr[], int n){
    int i, j, temp;

    for(i = 0 ; i < n ; i++){
        for(j = i + 1 ; j < n ; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printarr(int arr[], int size){
    int i;

    for(i = 0 ; i < size ; i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}
#include<stdlib.h>
#include<stdio.h>

int main(){
    int numOne, numTwo ;
    int tempVar;
    int choice;

    do{
        printf("Enter '1' to swap the numbers from input by using temporary variable \n");
        printf("Enter '2' to swap the numbers from input by without using temporary variable \n");
        printf("Enter '3' to end the program \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the first number : \n");
            scanf("%d",&numOne);
            printf("Enter the second number : \n");
            scanf("%d",&numTwo);

            tempVar = numOne;
            numOne = numTwo;
            numTwo = tempVar;

            printf("Numbers swapped. Now, Num1 = %d and Num2 = %d ",numOne,numTwo);
            break;
        
        case 2:
            printf("Enter the first number : \n");
            scanf("%d",&numOne);
            printf("Enter the second number : \n");
            scanf("%d",&numTwo);
            
            numOne = numOne + numTwo;
            numTwo = numOne - numTwo;
            numOne = numOne - numTwo;

            printf("Numbers swapped. Now, Num1 = %d and Num2 = %d ",numOne,numTwo);
            break;
        
        case 3:
            exit(0);
            break;

        default:
            printf("Wrong input. Please try again.");
            break;
        }

    }while(choice != 3);

    return 0;
}
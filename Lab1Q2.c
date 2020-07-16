#include<stdlib.h>
#include<stdio.h>

int main(){
    float numOne, numTwo;
    int choice ;

    do{
    printf("Enter '1' to add two numbers from input. \n");
    printf("Enter '2' to subtract two numbers from input. \n");
    printf("Enter '3' to multiply two numbers from input. \n");
    printf("Enter '4' to divide two numbers from input. \n");
    printf("Enter '5' exit. \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the first number : \n");
        scanf("%f",&numOne);
        printf("Enter the second number : \n");
        scanf("%f",&numTwo);
        
        float sum;
        sum = numOne + numTwo;

        printf("The sum of the two numbers is : %f \n",sum);
        break;
    
    case 2 :
        printf("Enter the first number : \n");
        scanf("%f",&numOne);
        printf("Enter the second number : \n");
        scanf("%f",&numTwo);

        float sub;

        if(numOne > numTwo){
            sub = numOne - numTwo;
        }
        else{
            sub = numTwo - numOne;
        }

        printf("The difference of the two numbers is : %f \n",sub);
        break;

    case 3 :
        printf("Enter the first number : \n");
        scanf("%f",&numOne);
        printf("Enter the second number : \n");
        scanf("%f",&numTwo);

        float prod;

        prod = numOne * numTwo;

        printf("The product of the two numbers is : %f \n",prod);
        break;

    case 4 :
        printf("Enter the first number : \n");
        scanf("%f",&numOne);
        printf("Enter the second number : \n");
        scanf("%f",&numTwo);

        float div;

        div = numOne/numTwo;

        printf("The division of the two numbers is : %f \n",div);
        break;

    case 5 :
        exit(0);
        break;

    default:
        printf("Wrong input. Please try again. \n");
        break;
    }}while(choice != 5);

    return 0;
}
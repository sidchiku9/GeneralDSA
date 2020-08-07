#include<stdlib.h>
#include<stdio.h>

int main(){
    int choice , numOne, numTwo, sum, sub, mul, div;

    printf("Enter the first number : \n");
    scanf("%d",&numOne);

    printf("Enter the second number : \n");
    scanf("%d",&numTwo);

    printf("Enter '1' for performing ADD\nEnter '2' for performing SUB\nEnter '3' for performing MUL\nEnter '4' for performing DIV\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        sum = numOne + numTwo;
        printf("The sum of the two numbers is : %d\n",sum);
        break;

    case 2:
        if(numOne > numTwo)
            sub = numOne - numTwo;
        else
            sub = numTwo - numOne;
        
        printf("The difference of the two numbers is : %d\n",sub);
        break;

    case 3:
        mul = numOne * numTwo;
        printf("The product of the two numbers is : %d\n",mul);
        break;

    case 4:
        div = numOne / numTwo;
        printf("The division of the two numbers is : %d\n",div);
        break;
    
    default:
        printf("Invalid input. Please try again. \n");
        break;
    }

    return 0;
}
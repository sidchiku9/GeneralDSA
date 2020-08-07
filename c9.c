#include<stdio.h>
#include<stdlib.h>

int main(){
    int numOne, numTwo, numThree;

    printf("Enter the first number of the three : \n");
    scanf("%d",&numOne);

    printf("Enter the second number : \n");
    scanf("%d",&numTwo);

    printf("Enter the last number : \n");
    scanf("%d",&numThree);

    if(numOne > numTwo && numOne > numThree){
        printf("The greatest of the three numbers is : %d\n",numOne);
    }
    else if (numTwo > numOne && numTwo > numThree)
    {
        printf("The greatest of the three numbers is : %d\n",numTwo);
    }
    else
    {
        printf("The greatest of the three numbers is : %d\n",numThree);
    }
    
    return 0;
}
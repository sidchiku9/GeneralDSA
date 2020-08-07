#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;

    printf("Enter the first number, a : \n");
    scanf("%d",&a);

    printf("Enter the second number, b : \n");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Now the number a  = %d and the number b = %d \n",a,b);

    return 0;
}
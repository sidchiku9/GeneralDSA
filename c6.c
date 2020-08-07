#include<stdio.h>
#include<stdlib.h>

void mult(int num){
    int i, mul;
    i = 0;

    for(i = 1 ; i <= 10 ; i++){
        mul = num * i;
        printf("%d X %d = %d\n",num,i,mul);
    }
}

int main(){
    int number ; 
    
    printf("Enter the number you want the table for : \n");
    scanf("%d",&number);

    printf("The multiplication table is as follows : \n");

    mult(number);

    return 0;
}
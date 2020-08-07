#include<stdlib.h>
#include<stdio.h>

int main(){
    int sum, rev, num, rem;
    rev = 0;
    sum = 0;

    printf("Enter the number which you want to reverse and also find the sum of the individual digits : \n");
    scanf("%d",&num);

    while(num != 0){
        rem = num % 10;
        sum += rem;
        rev = rev*10 + rem;
        num -= rem;
        num /= 10;
    }

    printf("The reverse of the number is : %d\n",rev);
    printf("The sum of the individual digits is : %d\n",sum);

    return 0;
}
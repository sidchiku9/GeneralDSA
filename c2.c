#include<stdio.h>
#include<stdlib.h>

int main(){
    int sum, limit, i;
    sum = 0;

    printf("Till which number do we have to calculate the sum ? \n");
    scanf("%d",&limit);

    for(i = 1 ; i <= limit ; i++){
        sum += i;
    }

    printf("The sum of natural numbers till %d is %d \n",limit,sum);

    return 0;
}
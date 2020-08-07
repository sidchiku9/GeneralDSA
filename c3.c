#include<stdlib.h>
#include<stdio.h>

int main(){
    int n1 = 0, n2 = 1, n3, i, size;

    printf("Enter the nth term till you want the Fibonacci series to continue : \n");
    scanf("%d",&size);

    printf("The Fibonacci series till the nth term is as follows : \n");
    printf("%d\n",n1);
    printf("%d\n",n2);

    for(i = 2 ; i < size ; i++){
        n3 = n1 + n2;

        n1 = n2;
        n2 = n3;

        printf("%d\n",n3);
    }

    return 0;
}
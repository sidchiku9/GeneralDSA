#include<stdio.h>
#include<stdlib.h>

int main(){
    int process, resources, i ;

    printf("How many processes do you have ? \n");
    scanf("%d",&process);

    printf("How many resources do you have ? \n");
    scanF("%d",&resources);

    int allocation[process][resources], maxNeed[process][resources], 
    availableRes[process][resources], remNeed[process][resources], totalResources[resources];

    printf("Enter the total number of resources : \n");

    for(i = 0 ; i < resources ; i++){
        printf("Resource %d : ",i);
        scanf("%d",&totalResources[resources]);
    }


}
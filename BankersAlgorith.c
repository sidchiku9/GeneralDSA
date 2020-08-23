#include<stdio.h>
#include<stdlib.h>

int main(){
    int process, resources, i, j ;

    printf("How many processes do you have ? \n");
    scanf("%d",&process);

    printf("How many resources do you have ? \n");
    scanf("%d",&resources);

    int allocation[process][resources], maxNeed[process][resources], 
    availableRes[process][resources], remNeed[process][resources], totalResources[resources],
    allocatedSum[resources];

    printf("Enter the total number of resources : \n");

    for(i = 0 ; i < resources ; i++){
        printf("Resource %d : ",i);
        scanf("%d",&totalResources[resources]);
    }

    printf("Enter the allocation of resources : \n");

    for(i = 0 ; i < process ; i++){
        for( j = 0 ; j < resources ; j++){
            printf("Process%d Resource%d ",i,j);
            scanf("%d",&allocation[i][j]);
        }
    }

    printf("Enter the max need of resources : \n");

    for(i = 0 ; i < process ; i++){
        for( j = 0 ; j < resources ; j++){
            printf("Process%d Resource%d ",i,j);
            scanf("%d",&maxNeed[i][j]);
        }
    }

    //finding out total allocated resources in order to calculate available resources
    for(i = 0 ; i < resources ; i++){
        for(j = 0 ; j < process ; j++){
            allocatedSum[i] += allocation[i][j];
        }
    }

    //available resources
    for(i = 0 ; i < 1 ; i++){
        for(j = 0 ; j < resources ; j++){
            availableRes[i][j] = totalResources[j] - allocatedSum[j];
        }
    }

    //remaining need
    for(i = 0 ; i < process ; i++){
        for(j = 0 ; j < resources ; j++){
            remNeed[i][j] = maxNeed[i][j] - allocation[i][j];
        }
    }

    

}
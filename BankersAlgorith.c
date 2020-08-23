#include<stdio.h>
#include<stdlib.h>

int main(){
    int process, resources, i, j, z ;

    printf("How many processes do you have ? \n");
    scanf("%d",&process);

    printf("How many resources do you have ? \n");
    scanf("%d",&resources);

    int allocation[process][resources], maxNeed[process][resources], 
    availableRes[resources], remNeed[process][resources], totalResources[resources];

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


   printf("Enter the available number of resources : \n");

    for(i = 0 ; i < 1 ; i++){
        for( j = 0 ; j < resources ; j++){
            printf("Resource%d : \n",j);
            scanf("%d",&availableRes[j]);
        }
    } 

    //remaining need
    for(i = 0 ; i < process ; i++){
        for(j = 0 ; j < resources ; j++){
            remNeed[i][j] = maxNeed[i][j] - allocation[i][j];
        }
    }

    for(i = 0 ; i < process ; i++){
        for(j = 0 ; j < resources ; j++ ){

            if(availableRes[j] >= remNeed[i][j]){
                printf("\n This works fine : %d",i);
                //could have used pop here to remove satisfied element
            }
            else{
                printf("Deadlock \n");
                continue;
            }
        }
    }

    return 0;

}
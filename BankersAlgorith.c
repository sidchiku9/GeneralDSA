#include<stdio.h>
#include<stdlib.h>

int main(){
    int process, resources, i, j, z, k, n, m, ind, y ;
    k = 0; y = 0; ind = 0;
    n = process; m = resources;

    printf("How many processes do you have ? \n");
    scanf("%d",&process);

    printf("How many resources do you have ? \n");
    scanf("%d",&resources);

    int allocation[process][resources], maxNeed[process][resources], 
    availableRes[resources], remNeed[process][resources], totalResources[resources], f[n], ans[n];

    for(i = 0 ; i < process ; i++ ){
        for(j = 0 ; j < resources ; j++){
            allocation[i][j] = 0;
            maxNeed[i][j] = 0;
            remNeed[i][j] = 0;
            availableRes[j] = 0;
            totalResources[j] = 0;
        }
        f[i] = 0;
    }

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
            printf(" %d ",remNeed[i][j]);
        }
        printf("\n");
    }

    /*int flag;

    for(i = 0 ; i < process ; i++){
        for(j = 0 ; j < resources ; j++ ){

            if(availableRes[j] >= remNeed[i][j]){
                flag++;
                //could have used pop here to remove satisfied element
            }
        }

        if(flag == resources){
            printf("This works fine : %d\n",i);
        }
    }*/

    for (k = 0; k < 5; k++) { 
        for (i = 0; i < n; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < m; j++) { 
                    if (maxNeed[i][j] > availableRes[j]){ 
                        flag = 1; 
                         break; 
                    } 
                } 
  
                if (flag == 0) { 
                    ans[ind++] = i; 
                    for (y = 0; y < m; y++) 
                        availableRes[y] += allocation[i][y]; 
                    f[i] = 1; 
                } 
            } 
        } 
    } 

    printf("Following is the SAFE Sequence\n"); 
    for (i = 0; i < n - 1; i++) 
        printf(" P%d ->", ans[i]); 
    printf(" P%d", ans[n - 1]); 

    return 0;
}
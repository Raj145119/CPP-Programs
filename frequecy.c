#include<stdio.h>
int main(){
    int arr[5][5];
    int arr1[15];
    memset(arr1,0,15*sizeof(int));
    int i,j,k;
    printf("Enter the value in the array");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // for(j=0;j<15;j++)
      //  arr1[j]=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                ++arr1[arr[i][j]];
              //  printf("%d ",arr[i][j]);
        }

    }
   /*  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
*/
   int a= MAX(arr1);
   printf("max=== %d ",a);
     printf("\n");
     for(i=0;i<15;i++){

            printf("%d ",arr1[i]);
       // }
    }
}

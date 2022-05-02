#include<stdio.h>
int main(){
    int r,c,i,j,l=0,m=0;
    printf("Enter the row and column");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    while(l<r && m<c){
        for(i=m;i<c;i++){
            printf("%d ->",arr[l][i]);
        }
        l++;
        for(i=l;i<r;i++){
            printf("%d ->",arr[i][c-1]);
        }
        c--;
        if(l<r){
            for(i=c-1;i>=m;i--)
                printf("%d ->",arr[r-1][i]);
            r--;
        }
        if(m<c){
            for(i=r-1;i>=l;i--)
                printf("%d ->",arr[i][m]);
            m++;
        }

    }
    return 0;
}

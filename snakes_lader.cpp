#include<stdio.h>
int main(){
    int n=30;
    int i,j,p;
    for(i=1;i<=6;i++)
    {
        if(i%2==0){
            n=n-4;
            p=n;
        }else{
        if(i>1){
            n=n-1;
        }
        p=n;

        }
        for(j=1;j<=5;j++){
            if(i%2!=0){
            printf("%d ",p);
            p--;
            n--;
            }
            else{
                printf("%d ",p);
                p++;
            }
        }

        printf("\n");
    }
    return 0;
}

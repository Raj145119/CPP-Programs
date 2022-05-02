#include<stdio.h>
int fun(int n){
    int i,res=1,p;
    if(n<=0)
        return 0;
    p=n;
    for(i=1;i<=n;i++){//fun(n,i--;)
        res*=p;
        p++;
    }
    // printf("%d",res);
    return res+fun(n-1);
}



int main(){
    int  i,j,k;
    int p=1;
    int res=1,sum=0;
    int n=5;
    for(i=1;i<=n;i++){
        p=i;
        for(j=1;j<=i;j++){// for(j=i;j<=2*i-1;j++){
            res=res*p;
            p++;
        }
        sum=sum+res;
        res=1;
    }
    printf("%d",sum);
    int a=fun(2);
     printf("ans=%d",a);
    return 0;
}

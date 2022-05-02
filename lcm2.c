#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=(a>b)?b:a;
    int gcd=1;
    for(i=x;i>1;i--){

        if(a%i==0 && b%i==0){
            gcd=i;
           break;
        }
    }
    int z=a*b;

    printf("lcm of two number is= %d",z/gcd);//a*b divided by gcd = lcm
    return 0;
}

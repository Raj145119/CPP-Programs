#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=(a>b)?b:a;
    int gcd=1;
    for(i=2;i<=x;i++){

        if(a%i==0 && b%i==0){
            a=a/i;
            b=b/i;
            gcd=gcd*i;
        }else
        {
            if(a%i==0){
                gcd=gcd*i;
                a=a/i;
            }
            if(b%i==0){
                gcd=gcd*i;
              b=b/i;
        }
        }
    }
    gcd=gcd*a*b;
    printf("lcm of two number is= %d",gcd);
    return 0;
}

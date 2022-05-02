//addititon of two fraction number....
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    int num=(a*d)+(b*c);
    int den=b*d;
    int i,gcd=1;
    for(i=1;i<=num && i<=den;i++){
        if(num%i==0 && den%i==0)
        {
            gcd=i;
        }
    }
    printf("%d  %d",num/gcd,den/gcd);

    return 0;
}

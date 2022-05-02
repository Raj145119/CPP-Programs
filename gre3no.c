#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
   // int x=(a>b)?(a>c)?a:()::
    int x=(a>b)?a:b;
    int gr=(x>c)?x:c;
    printf("=%d",gr);
    return 0;
}

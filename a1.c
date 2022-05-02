#include<stdio.h>
int main(){
    int i,x=0xFFFFFFE;
    for(i=0;i<4;i++){
        x=x<<1;
    }
    printf("%d",x);
    return 0;
}

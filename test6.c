
/* Q. 26 ka answer hai*/

#include<stdio.h>
int main(){

        int n=4,a=1,b=1;
        int res=0,i;


        /*function ke inside code ko write ker do*/
        if(a<b){
            for(i=0;i<n;i++)
                res+=a;
        }else{
            res=res+b;
            for(i=1;i<n;i=2*i)
                res=res+b;
        }
        printf("%d",res);
        return 0;
}

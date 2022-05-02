#include<stdio.h>
int main(){
    char arr[20];

    int n=0;
    int i,j;
    char ch;
    scanf("%s",&arr);

    for(i=0;arr[i]!='\0';i++)
        n++;

    for(i=0,j=n-1;i<j;i++,j--){
        if((arr[i]!='$' && arr[j]!='$')&& (arr[i]!=',' && arr[j]!=',')){
            ch=arr[i];
            arr[i]=arr[j];
           arr[j]=ch;
        }
    }

    printf("%s",arr);
    return 0;
}

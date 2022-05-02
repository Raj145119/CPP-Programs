#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int arr1[]={1,4,7,7,2,4,2,11,6};
    int l=sizeof(arr1)/sizeof(arr1[0]);
    int l1=*(&arr1+1)-arr1;
    int i,j;
    for(i=0;i<l;i++){
        j=arr1[i];
        arr[j]=1;
        //cout<<j;
    }
    for(i=0;i<15;i++){
        if(arr[i]==1)
            cout<<i<<" ";
    }
    //cout<<l1;
    return 0;
}


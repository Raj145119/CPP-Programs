#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n=10,temp,j,k,l;
    cout<<"Enter the value in array";
    for(i=0;i<10;i++)
    cin>>arr[i];
    int arr1[10]={0};
    for(i=0,j=n/2;i<n/2-1,j<n;i++,j++){
        for(k=i,l=j;k<n/2 || l<n;k++,l++){
            if(arr[i]>arr[k]){
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
            if(arr[j]<arr[l]){
                temp=arr[j];
                arr[j]=arr[l];
                arr[l]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
       // if(arr1[i]!=0)
            cout<<arr[i]<<" ";
    }
    return 0;
}

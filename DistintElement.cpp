#include<iostream>
using namespace std;
int main(){
    int arr[100],i;
    cout<<"Enter the value in array";
    for(i=0;i<10;i++)
    cin>>arr[i];
    int arr1[10]={0};
    for(i=0;i<10;i++){
        arr1[arr[i]]++;
    }
    for(i=0;i<10;i++){
        if(arr1[i]!=0)
            cout<<i<<" ";
    }
    return 0;
}

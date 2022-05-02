#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
    cout<<"Enter the number in array\n";
    string arr;
    int i=0,sum=0,j=0;
   // for(i=0;i<5;i++){
    cin>>arr;
    //}
    int len=arr.size();
    string str="123";
    while(len>0){

         j=arr[i]-48;
        sum=sum+j;
        i++;
        len--;
    }
    cout<<"sum="<<sum;





    return 1;
}

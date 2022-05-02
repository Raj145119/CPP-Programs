#include<iostream>
using namespace std;
int fact(int num){
        int fact=1,i;
        for(int i=2;i<=num;i++)
        fact=fact*i;
        return fact;
}
int main(){

    int n,r,i,j;
    int res;
    cout<<"Enter the n and r";
    cin>>n>>r;
    res=(fact(n)/(fact(r)*fact(n-r)));
    cout<<res;
    return 0;
}

#include<iostream>
using namespace std;
int max(int x,int y){
    return (x>y)?x:y;
}
int napsack(int W,int wt[],int val[],int n){

    if(n==0 || W==0)
        return 0;

    if(wt[n-1]>W)
        return napsack(W,wt,val,n-1);
    else
        return max(val[n-1]+napsack(W-wt[n-1],wt,val,n-1),napsack(W,wt,val,n-1));

}
int main(){

    int val[5]={10,23,24,56,23};
    int wt[5]={2,1,4,4,2};
    int n=sizeof(val)/sizeof(val[0]);
    int W=20;
    int result=napsack(W,wt,val,n);
    cout<<result;
    return 0;
}

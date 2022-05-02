#include<iostream>
using namespace std;
int arr[100];
int top=-1;
void push(int x){
    arr[++top]=x;
}
int pop(){
int x=arr[top--];
return x;
}


int main(){
    int n,i;
    cout<<"Enter the element"<<endl;
    cin>>n;
    int arr[n];
    for ( i=1;i<=n;i++){
        push(i);
    }
    int x=pop();
    cout<<x;
    int y=pop();
    cout<<y;
    int z=pop();
    cout<<z;
    int c=pop();
    int d=pop();
    cout<<d;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int i,j,n,m=1;
    cin>>n;
    for(i=0;i<n;i++){
            if(i==1){
                m=m+n;
            }if(i==n-1){
                m=m-(n-1)*n;
            }
        for(j=1;j<=n;j++){

            cout<<m;
            m++;
            if(j<n)
                cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}

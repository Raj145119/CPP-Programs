#include<iostream>
using namespace std;
int main()
 {
    int n; cin>>n;
    int m=n+1;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++){

            if(i%2!=0 && j==0){
                cout<<i+2<<" ";
                continue;
            }
            if( i%2==0 && j== m-1){
                cout<<i+2;
                break;
            }
                cout<<i+1<<" ";
        }
        cout<<endl;
    }

	return 0;
}

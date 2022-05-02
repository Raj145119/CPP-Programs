#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
 {
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j< 2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else cout<<i+1;

        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j< 2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else cout<<i+1;

        }
        cout<<endl;
    }
	return 0;
}

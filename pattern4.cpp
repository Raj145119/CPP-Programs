#include<iostream>
using namespace std;
/*int main()
 {
    int n; cin>>n;
    int val=1,tmp;
    for(int i=0; i<n; i++)
    {
        val= val+i;
        tmp=val;
        for(int j=0; j<2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else{
                cout<<tmp;
                tmp++;
            }
        }
        cout<<endl;
    }
    tmp=val;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else{
                cout<<tmp;
                tmp++;
            }
        }
         val = val-i;
         tmp= val;
        cout<<endl;
    }
	return 0;
}*/

int main(){
int n; cin>>n;
    int val=1,tmp=1;
    for(int i=0; i<n; i++)
    {
        val=val+i;
        tmp=val;
        for(int j=0; j<2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else{
                cout<<tmp;
                tmp++;
            }
        }
        cout<<endl;
    }
    tmp=val;
   // val=tmp-1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<2*i+1;j++)
        {
            if(j&1) cout<<"*";
            else{
                cout<<tmp;
               tmp++;
            }
        }
        cout<<endl;
        val=val-i;
        tmp=val;
    }


    return 0;
}

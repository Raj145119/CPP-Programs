#include<iostream>
using namespace std;
int main()
 {
    int n; cin>>n;
    int val = 0,tmp;
    for(int i=0; i<n; i++)
    {
        if(i&1)
        {
            val+= i;
            tmp =val;

        }
        else{
            val+=1;
            tmp=val;
        }
        for(int j=0; j< 2*i+1; j++)
        {
            if(j&1) cout<<"*";
            else {
                if(i&1)
                    {
                        cout<<tmp;
                         tmp--;
                    }
                    else
                    {
                        cout<<val;
                        val++;
                    }
            }
        }
        cout<<endl;
        }
	return 0;
}

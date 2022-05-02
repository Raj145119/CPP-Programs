
/* Q. 25 ka answer hai*/

#include<iostream>
#include<cstring>
using namespace std;
int main(){

        int flag=0,i,n=8,count=0;
        string s="########";

        /* function ke inside write ke lo*/
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='*'){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"No Way!";
        }
        else{
            for(i=1;i<n;i=i+3){

                count++;
            }
        }
        cout<<count;
        return 0;
}

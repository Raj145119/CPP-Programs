#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s="abcdefgill";
    int l=s.length();
    string s2="";
    int d=0;
    char s1[l];
    for(int i=0;i<l;i++){
        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
            s1[d]=s[i];
            s2=s2+s[i];
            d++;

        }
    }

    s1[d]='\0';
   // strcpy(s,s1);
    cout<<s2<<endl;
    cout<<s1;
    cout<<sizeof(s1);
    return 0;
}

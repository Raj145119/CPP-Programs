#include<cstring>
#include<iostream>
using namespace std;

int main(){
    char *p="asddza",*p1;
    p1=p;
    p="aaaaa";
    cout<<p;
    cout<<p1;
    //p=arr;
    int i=0;
    cout<<(i=0?1:2?3:4);

    char c[4]="as";
    char d[4]="add";
    cout<<strcpy(d,strcat(c,d));
    cout<<f;
    return 0;
}

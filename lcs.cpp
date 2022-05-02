#include <iostream>
#include<cstring>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;
}
int lcs(char *s,char *s1,int m,int n ){
     int a[m+1][n+1];
    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	           if(m==0 || n==0)
	                a[i][j]=0;
	           else if(s[i]==s1[j])
	                a[i][j]=a[i-1][j-1]+1;
	           else
	                a[i][j]=max(a[i][j-1],a[i-1][j]);
	        }
	    }
	    return a[m][n];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0){
	    char s[100];
	    char s1[100];
	    cin>>s;
	    cin>>s1;
	    int m=strlen(s);
	    int n=strlen(s1);
	   int x=lcs(s,s1,m,n);
	   cout<<x;

    }
	return 0;
}

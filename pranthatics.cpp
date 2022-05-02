#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
int t;
	scanf("%d",&t);
	while(t-->0){
	   char ch[100000];
	   scanf("%s",&ch);
	   int i=0,count=0;
	  // char c=;
	   while(ch[i]!='\0'){
	       if(ch[i]=='(' && ch[i+1]==')'){
	            i+=2;
	            count+=2;
	       }
	       else{
	           i++;
	       }
	   }
	   printf("%d \n",count);
	}
	return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>


using namespace std;
int main(){
    int arr[5][5];
    int arr1[15]={0};
//    memset(arr1,0,15*sizeof(int));
    int i,j,k;
    cout<<"Enter the value in the array";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
    // for(j=0;j<15;j++)
      //  arr1[j]=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                ++arr1[arr[i][j]];
              //  printf("%d ",arr[i][j]);
        }

    }
   /*  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
*/
   int a= *max_element(arr1,arr1+15);
   cout<<distance(arr1,max_element(arr1,arr1+15));
   cout<<"a="<<a<<endl;
  // sort(arr1,arr1+15);
    string str="aaa:bb";
    cout<<str.find(":");
 cout<<"\n";
     for(i=0;i<15;i++){

            cout<<arr1[i];
       // }
    }
}

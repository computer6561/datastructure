#include<iostream>
#define size 100
using namespace std;
int main(){

 int data[size],i,j,n,k,flag=1;
 cin>>n;
 cin>>k;
 for(i=0;i<n;i++)
   cin>>data[i];

 for(i=0;i<n;i++)
 {
    for(j=i+1;j<k+i;j++)
      {
        if(data[i]==data[j] && j<n){
        cout<<"Yes";
          flag=0;
          break;
        }

      }
       if(flag==0)
       {
         break;
       }
 }
 if(flag==1)
       {
         cout<<"No";
       }


return 0;
}

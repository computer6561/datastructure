#include<iostream>
using namespace std;

int main(){

 long long unsigned int n=0,rem=0;
 int i=0,p=0,mony[]={1000,500,100,50,20,10,5,2,1};
 cin>>n;

  while(1){
    if(mony[i]<=n){
       n = n-mony[i];
       cout<<mony[i]<<" ";
    }
    else
       i++;
    if(n==0)
        break;

  }

  return 0;

}

#include<iostream>
using namespace std;

int main(){

 long long unsigned int s[100000],p[100000],n,t1,t2,end=0;
 int i,j,count=0;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>s[i];
 }
 for(i=0;i<n;i++){
    cin>>p[i];
 }
 cout<<"\n";

  for(i=0;i<n;i++){
     for(j=0;j<n;j++){
        if(s[i]<s[j]){
            t1 = s[i];
            s[i] = s[j];
            s[j] = t1;
            t1 = p[i];
            p[i]=p[j];
            p[j]=t1;
        }
     }
 }
 /*
for(j=0;j<n;j++){
        cout<<s[j]<<"\t"<<p[j]<<endl;
}
*/
  for(i=0;i<n;i++){
     if(s[i]<p[i] && end<=s[i]){
        count++;
        end = p[i];
        // cout<<"S : "<<s[i]<<", P : "<<p[i]<<"\n";
     }

 }
  cout<<"\n"<<count;

  return 0;
}

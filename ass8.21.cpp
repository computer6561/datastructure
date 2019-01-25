#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
  long unsigned int n,allcnt[100000];
 int i,j,p=0,cnt=0,max;
 char data[100000],check_char; 
//scanf("%d",&n);
//scanf("%lu %[^\n]c",&n,data);
cin>>n;
cin.get(data);
 if(strlen(data)==n)
 {

     for(i=0;i<strlen(data);i++){
        check_char = data[i];
        for(j=i;j<strlen(data);j++){
            if(check_char==data[j]){
            	cnt ++;
            	
			}
              
        }

         allcnt[p++]=cnt;
         cnt = 0;
     }
     max = allcnt[0];
     i=0;
     for(j=1;j<p;j++){
     	if(max<allcnt[j]){
     		max = allcnt[j];
     		i=j;
		 }
     	  
	 }
         cout<<data[i];
 }
return 0;
}

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
 int i,j,p=0,n=0,cnt=0,max;
 char data[100],check_char;
int allcnt[100];
scanf("%d",&n);
scanf("%[^\n]c",data);
//gets(data);

cout<<"n : "<<n;
cout<<data;
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
 }else
   cout<<"Size of array is not matched";
return 0;
}

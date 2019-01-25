#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char res[100],arr[100];
	int i,k=0,len,flag=0;
	cin.get(arr, 100);
    len = strlen(arr);
     for(i=0;i<len;i++){
     	
     	if(isdigit(arr[i]))
     	  flag++;
     	if(arr[i]==' '){
     	
     		res[k++]='I';
     		res[k++]='I';
     		res[k++]='T';
		 
		 }
		 else{
		 	res[k++] = arr[i];
		 
		 }
     	  
	 }
	 if(flag!= len)
	  cout<<"NO\n";
	  else
	  cout<<"YES\n";
	  
	 for(i=0;i<strlen(res);i++)
	  cout<<res[i];
     
	
	return 0;
}

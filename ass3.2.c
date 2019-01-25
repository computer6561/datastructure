#include<stdio.h>
int maxNumber(int *ok,int n){
	int i,max = ok[0];
	for(i=1;i<n;i++){
		if(ok[i]>max)
		  max = ok[i];
	}
	
	return max;
}
int * result(int *ok,int n,int max){
	int i,arr[n];
	for(i=0;i<n;i++){
		ok[i]=max-ok[i];
	}
	
	return ok;
}
int main(){
	int i,n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int *ptr,arr[n];
	for(i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	}
	    ptr = arr;
	for(i=0;i<m;i++){
	   result(ptr,n,maxNumber(ptr,n));
	}
	for(i=0;i<n;i++){
	   			printf("%d ",*(ptr+i));
	   	}
	return 0;
}

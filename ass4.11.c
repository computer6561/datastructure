#include<stdio.h>
#define MAXSIZE 1000
int main(){
	
	int n,i=0,j=0,num[MAXSIZE]={0};
	long long unsigned int b[MAXSIZE];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%llu",&b[i]);
	}
	for(i=0;i<n;i++){
	
		for(j=0;j<n;j++){
			if(b[i]==b[j]){
				num[i]+=1;
			}
		}
	}
	for(i=0;i<n;i++){
	   //	printf("%d = %d\n",i,num[i]);
	   if(num[i]>1){
	   	printf("NO");
	   	break;
	   } 
	}
	if(i==n)
	  printf("YES");
	
	return 1;
}

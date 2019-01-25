#include<stdio.h>
#define MAXSIZE 100000
long long unsigned int sumprefix(int index,int n,long long unsigned int *ptr){
	long long unsigned int sum=0;
	int i=0;
	for(i=0;i<=index;i++){
		sum+=*(ptr+i);
	}
	//printf("indexp = %d,SUMP = %llu",index,sum);
	return 	sum;
}
long long unsigned int sumsufix(int index,int n,long long unsigned int *ptr){
	long long int sum=0;
	int i=0;
	//printf(" index %d ",index);
	for(i=index;i<n;i++){
		sum+=*(ptr+i);
		//printf("  %llu ",sum);
	}
		//printf("indexs = %d, SUMS = %llu",index,sum);
		return 	sum;	
}

int main(){
	
	int n,i=0,j=0;
	long long unsigned int b[MAXSIZE],num[MAXSIZE]={0},min=0;
		scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%llu",&b[i]);
	}
     for(i=0;i<n;i++){
     	num[i] = sumprefix(i,n,b) + sumsufix(i,n,b);
     //	printf("ans%d = %llu\n\n",i,num[i]);
	 }
	 min=num[0];
	  for(i=0;i<n;i++){
         if(num[i]<min){
         	 min=num[i];
         	 j=i;
		 }
         
	 }
	 
	printf("%d",j+1);
	
	
	return 1;
}

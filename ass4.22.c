#include<stdio.h>
#define MAXSIZE 1000

int * sortdisc(int * q,int n){
		int i=0,j=0,temp;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(q[i]<q[j]){
					temp = q[i];
					q[i]= q[j];
					q[j] = temp;
				}
		}
	}
	return q;
}
int * sortass(int * p,int n){
		int i=0,j=0,temp;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(p[i]>p[j]){
					temp = p[i];
					p[i]= p[j];
					p[j] = temp;
				}
		}
	}
	return p;
}
int main(){
	
	int n,i=0,j=0,sum=0;
    int a[MAXSIZE],b[MAXSIZE],num[MAXSIZE]={0},min=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int *w = sortdisc(a,n);
	int *x = sortass(b,n);
	for(i=0;i<n;i++){
		sum+=(*(w+i))*(*(x+i));
	}
	printf("%d  ",sum);
	return 1;
}

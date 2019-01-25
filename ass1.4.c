#include<stdio.h>
int main()
{
int N=0,d,n,count=0;
scanf("%d",&N);
scanf("%d",&d);

while(N!=0){
	n = N%10;
	if(n==d){
		count++;
	}
	N=N/10;
}
 printf("%d",count);
 return 0;	
}

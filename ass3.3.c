#include<stdio.h>

int main(){
	long int n;
	int one=0,zero=0;
	scanf("%lu",&n);
	while(n!=0){
		int p = n%2;
		n = (n/10);
		if(p==1)
		  ++one;
		else if(p==0)
		  ++zero;
		  
	}
	if(zero==1 || one==1)
	 printf("YES");
	 else 
	  printf("NO");
	
	return 0;
}

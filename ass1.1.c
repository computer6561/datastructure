#include<stdio.h>
int main(){

    int x,y=0,p,q;
    scanf("%d",&x);
    q = x;
    while(x!=0){
    	p = x%10;
    	x = x/10;
    	
    	y = y*10 +p;
	}
	if(y==q)
		printf("YES");
	else
		printf("NO");
		
	return 0;
}

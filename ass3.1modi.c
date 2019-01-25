#include<stdio.h>
int main(){
    
    long long unsigned int n;
    scanf("%llu",&n);
    int jump=1;
    while(1){
    	if(n==0)
    	  {
    	  	printf("YES");
    	  	break;
		  }
		  else if(n<jump || n==0)
		  {
		  	printf("NO");
		  		break;
		  }
	//	printf("T Jump : %d, N=%d \n\n",jump,n);
	   	if(jump==3){
	   		n-=3;
				jump=1;
			}
			else if(jump==2){
				n-=2;
				++jump; 
			}
			  
			else if(jump==1)
			{
				n-=1;
				 ++jump;
			} 
		  
	}
	return 0;
}

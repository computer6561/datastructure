#include<stdio.h>
int main(){
	int jump=1;
    long long unsigned int past=0,n;
    scanf("%llu",&n);
    long powerN(long base,int power){
    	int i,p=1;
    	for(i=1;i<=power;i++){
    		p = p*base;
		}
		return p;
	}
//	printf("%llu",powerN(10,11));
	while(1){
		
			printf("T Jump : %d, N=%d, Past = %d \n\n",jump,n,past);
			past+=jump;
			printf("n-past : %d \n\n",n-past);
			if(n-past==0){
				printf("YES");
				break;
			}
			else if(n-past<jump || n-past==1){
				printf("NO");
				break;
			}  
			
			if(jump==3){
				jump=1;
			}
			 
			else if(jump==2){
				++jump; 
			}
			  
			else if(jump==1)
			{
				 ++jump;
			}
		//	printf("B Jump : %d, N=%d, Past = %d \n\n",jump,n,past);			
	}
	return 0;
}

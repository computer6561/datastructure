#include<stdio.h>
int main(){
	
	int arr[5][5];
	int i,j,k,n,m;
	
	scanf("%d",&m);
	scanf("%d",&n);
    if((m>=1||m<=5) && (n>=1||n<=5))
    {
      for(i=0;i<m;i++){
            for(j=0;j<n;j++)
            {
              scanf("%d",&arr[i][j]);	
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<=i;j++)
            {
              printf("%d ",arr[i][j]);	
            }
            for(k=j;k<n;k++){
                printf("0 ");
            }
             if(k==n && k!=j)
                  printf("\n");

        }
    }
	return 0;
}

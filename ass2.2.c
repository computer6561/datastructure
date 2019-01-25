#include<stdio.h>
int main(){
	
	int arr[10][10];
	int tarr[10][10];
	int i,j,r,c;
	
	scanf("%d",&r);
	scanf("%d",&c);

      for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            {
              scanf("%d",&arr[i][j]);	
            }
        }
        
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
            {
              tarr[j][i] = arr[i][j];	
            }
        }
        
          for(i=0;i<c;i++){
            for(j=0;j<r;j++)
            {
              printf("%d ",tarr[i][j]);	
            }
            if(j==r)
            printf("\n");	
        }
	return 0;
}

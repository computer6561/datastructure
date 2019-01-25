#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	
	int i=0,j=0,k=0,acount;
	int alen=0,blen=0;
	scanf("%s",a);
	scanf("%s",b);
	while(a[i] !='\0'){
		++alen;
		i++;
	}
	i=0;
	while(b[i] !='\0'){
		++blen;
			i++;
	}
	char * arrange(char * a,int len){
			for(i=0;i<len;i++){
    			for(j=0;j<len;j++){
    			  if(a[i]<a[j]){
    			  	int temp = a[i];
    			  	a[i] = a[j];
    			  	a[j]= temp;
				  }
				}
			}
			return a;
	}
    if(strcmp(arrange(a,alen),arrange(b,blen))==0){
    	printf("YES");
	}
	else
	 printf("NO");

	return 0;
}

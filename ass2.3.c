#include<stdio.h>
#include<string.h>
int main(){
	
	char str[100],strrev[100];
	int i=0,j=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		if(str[i] =='.')
		 str[i] = 'a';
	}
	j=strlen(str)-1;
	for(i=0;i<strlen(str);i++){
		strrev[j] = str[i];
		j--;
	}
	
    if(strcmp(str,strrev)==0){
      printf("%s",str);
	}
	else
	 printf("-1");

	return 0;
}

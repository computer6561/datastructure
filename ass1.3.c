#include<stdio.h>
int main()
{
int no,p;
scanf("%d",&no);
p=no;
while(no!=0){
	if(no%2==0)
	 {
	 	 no =no/2;
	 }
	else 
      break;
	
}
if(no==1 && no!=p)
printf("YES");
else 
 printf("NO");
 return 0;	
}

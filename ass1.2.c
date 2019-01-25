#include<stdio.h>
int main()
{
int yr;
scanf("%d",&yr);
if(yr%4==0)
   if(yr%100==0)
      if(yr%400==0)
		printf("YES" );
	  else
		printf("NO" );  
	else
		printf("YES" );
else
   printf("NO" );
 return 0;	
}

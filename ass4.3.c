#include<stdio.h>

 int main()
 {
 	int i,count=0;
    long long unsigned int a,b,digit,div;
 	scanf("%llu",&a);
 	
 	for(i=2;i<=a;i++)
	 {
	 	b=a%i;
	 	if(b==0)
	 	{
	 	 div[i]=i;
	 	 	printf("\n\n\nDivisor : %llu ",div[i]);
			   	 
					
	while (div>0)
      {
        digit = div % 10;
        div /= 10;
        printf("\nDigit  = %llu",digit);
       if(digit==3||digit==5||digit==6)
       { 
       count++;
         break;
       
	   }
	   
    }
		} 
	
	}
	printf("%d",count); 
	
  return 0;	
 }

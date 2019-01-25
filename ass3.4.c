#include<stdio.h>
#include<math.h>

	float texi(float dt,float vt){
		
		return dt/vt;
	}
	float walk(float dw,float vw)
	{
		
		return (sqrt(2)*dw)/vw;
	}
float main(){
	float d,v1,v2;
	scanf("%f",&d);
	scanf("%f",&v1);
	scanf("%f",&v2);
     if(texi(d,v1)>walk(d,v2)){
     	printf("Taxi");
	 }
	 else{
	 	printf("Walk");
	 }
	 
	 return 1;
	
}

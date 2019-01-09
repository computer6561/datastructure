#include<stdio.h>

int partition(int p,int r,int a[]){
   int piv = a[r];
   
   int i=0,j=0,tmp;
   j=p-1;
   for(i=p;i<r;i++){
       //printf("hii");
       if(piv>=a[i]){
          j+=1;
          tmp=a[j];
          a[j]= a[i];
          a[i] = tmp;  
         //printf("hello %d",tmp);     
       }
   }
   a[r] = a[j+1];
   a[j+1] = piv;
  return j+1;
}

void quickSort(int p,int r,int a[])
{

  if(p<r){
   int q = partition(p,r,a);
  //  printf(" !%d ! ",q);
    quickSort(p,q-1,a);
    quickSort(q+1,r,a);
  }

}

int main(){
int b[]= {5,7,6,1,3,2,4};
int p=0,q=6;
quickSort(p,q,b);

for(int i=p;i<=q;i++){

printf("%d ",*(b+i));
}
printf("\n\n");
return 0;
}
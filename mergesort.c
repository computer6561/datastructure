#include<stdio.h>
#include<math.h>

int merge(int p,int q,int r,int a[]){
 int n1 = q-p;
 int n2 = r-q+1;
 int left[100],right[100];
 int i,j=0,k=0;
  for(i=p;i<=r;i++){
   if(i<=n1){
      left[j++]= a[i];
   }else{
     right[k++] = a[i];
  }
  }
for(int i=p;i<=r;i++){

printf("%d  ",a[i]);
}
printf("\n\n");

  j=k=0;
  for(i=p;i<=r;i++){
   if(j<=n1 && k<=n2){
      if(left[j]<right[k]){
        a[i] =left[j++];
   // printf("%d: ", a[i]);
     }else{
       a[i] = right[k++];
     }
   }else if(j<k){
     a[i] = left[j++];
   }else{
     a[i] = right[k++];
    }

  }


}
void sort(int p,int r, int a[]){
	if(p<r){
	long int	q = (p+r)/2;
 // printf("\n1:  %d,%d ",p,q);
  sort(p,q,a);
   //printf("\n2: %d,%d ",q+1,r);
   sort(q+1,r,a);
   printf("\n3:  %d,%d,%d ",p,q,r);
   merge(p,q,r,a);
	}
   
}

int main(){
int a[] = {38,27,43,3,9,82,10};
int p=0,r=6,q=0;
sort(p,r,a);

for(int i=p;i<=r;i++){

printf("%d  ",a[i]);
}

printf("\n\n");

return 0;
}




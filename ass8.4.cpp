#include <cstdio>
#include <stdlib.h>
#include <limits.h>
// function prints MST as vertex i - vertex j w , in order of vertex j (1 to n-1)
int printMST(int parent[], int n, int** graph)
{
   for (int i = 1; i <  n; i++)
   printf("%d -- %d %d\n", parent[i], i, graph[i][parent[i]]);
}
int* prim(int** graph,int no_of_vertices);
int main(){
  int no_of_vertices;
 scanf("%d", &no_of_vertices); 
  int** graph = new int*[no_of_vertices];
  for(int i = 0; i < no_of_vertices; ++i)
     graph[i] = new int[no_of_vertices];
  for(int i = 0; i <no_of_vertices; ++i)
    for(int j = 0; j < no_of_vertices; ++j)
      scanf("%d",&graph[i][j]);
 
   
  int* parent;
   parent= prim(graph,no_of_vertices);
    // Print the solution
   printMST(parent, no_of_vertices, graph);
     return 0;
}

int* prim(int** graph,int no_of_vertices){
     int* parent= (int*)malloc(sizeof(int)*no_of_vertices);
	// MST is to be stored in parent array ;
//parent[i] stores the parent of vertex i;
int i,j;
/*for(i=0;i<no_of_vertices;i++){
     for(j=0;j<no_of_vertices;j++){
       printf("%d",*(*(graph+i)+j));
	 }
     printf("\n");
}
*/
for(j=0;j<no_of_vertices;j++){
      *(parent+j) = *(*(graph+0)+j);
	 }
	 
	 
 return parent;
}


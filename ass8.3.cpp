#include <cstdio>
#include <stdlib.h>
const int MAXval=1000;


void printSolution(int dist[], int n){
//A function to print the constructed distance array
    for (int i = 0; i < n; i++)
      printf("%d %d\n",i,dist[i]);
}
int* shortestDist(int** graph, int src, int no_of_vertices);

int main()
{
  int no_of_vertices;
  scanf("%d", &no_of_vertices);
  int sourcevertex;
  scanf("%d", &sourcevertex);
  int** graph = new int*[no_of_vertices];
  for(int i = 0; i < no_of_vertices; ++i)
     graph[i] = new int[no_of_vertices];
  for(int i = 0; i <no_of_vertices; ++i)
    for(int j = 0; j < no_of_vertices; ++j)
      scanf("%d", &graph[i][j]);
    
  int* dist=shortestDist(graph, sourcevertex,no_of_vertices);

  printSolution(dist, no_of_vertices);
 
    return 0;
}

int* shortestDist(int** graph, int src, int no_of_vertices){
	
	
}


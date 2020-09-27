#include <stdio.h>
#include <stdlib.h>

int source,dest,V,E,visited[20],G[20][20],pcount=0,edge=0;
void DFS(int i, int d)
{
    int j;
    visited[i]=1;
    if(i!=d)
    {
      printf(" %d->",i);
	  edge++;
      for(j=0;j<V;j++)
      {
            if(G[i][j]==1&&visited[j]==0)
                  DFS(j,d);
      }
    }
    else
    {
		if(edge==E)
			pcount++;
		edge=0;
		printf(" %d\n",i);
		visited[dest]=0;
		visited[source]=0;
		DFS(source, dest);
    }
}
int main()
{
    int i,j;
    printf("Number of vertices : ");
    scanf("%d",&V);
    printf("Adjecency matrix : \n");
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
            scanf("%d", &G[i][j]);
    }

    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
            printf(" %d ",G[i][j]);
        printf("\n");
    }
    printf("Source : ");
    scanf("%d",&source);
    printf("Destination : ");
    scanf("%d", &dest);
	printf("Number of edges : ");
	scanf("%d", &E);
	printf("Possible Paths are :-\n");
	if(G[source][dest]==1)
	{
		if(E==1)
			pcount++;
		printf(" %d->%d\n", source, dest);
		G[source][dest]=G[dest][source]=0;
	}
    DFS(source, dest);
	printf("\nNumber of paths with edges %d: %d",E,pcount);
    return 0;
}

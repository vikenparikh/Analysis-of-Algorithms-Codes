#include <stdio.h>
#include <limits.h>

void floydWarshall(int adj[100][100], int next[100][100], int v);
void path(int u, int v, int next[100][100]);
int main()
{
	int adj[100][100];
	int next[100][100];
    int v, i, j;
    clrscr();
	printf("Enter the number of vertices\n");
	scanf("%d",&v);
printf("Enter the %d by %d adjacency matrix\n",v,v);
    for(i=0;i<v;i++) {
	for(j=0; j<v; j++) {
			scanf("%d",&adj[i][j]);
	    if(adj[i][j]==0 && i!=j)
		adj[i][j]=10000;
	}
    }
    floydWarshall(adj, next, v);
	printf("The distance between vertices is\n");
    for(i=0;i<v;i++) {
	for(j=0; j<v; j++) {
	    if(adj[i][j]==10000)
				printf("INF ");
	    else
				printf("%3d ",adj[i][j]);
	}
		printf("\n");
    }
    for(i=0;i<v;i++) {
		for(j=0;j<v;j++) {
			printf("The path between %d and %d is: ",i+1,j+1);
			path(i,j,next);
			printf("for a weight of %d\n",adj[i][j]);
		}
    }
    getch();
    return 0;
}

void floydWarshall(int adj[100][100], int next[100][100], int v)
{
	int i, j, k;
    for(i=0;i<v;i++) {
	for(j=0;j<v;j++) {
	    next[i][j] = j;
	}
    }

    for(k=0;k<v;k++) {
	for(i=0;i<v;i++) {
	    for(j=0; j<v; j++) {
		if(adj[i][k] + adj[k][j] <adj[i][j]) {
		    adj[i][j]=adj[i][k]+adj[k][j];
		    next[i][j]=next[i][k];
		}
	    }
	}
    }
}

void path(int u, int v, int next[100][100])
{
	printf("%d ",u+1);
    while(u!=v) {
	u=next[u][v];
		printf("%d ",u+1);
    }
}

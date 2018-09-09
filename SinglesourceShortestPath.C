/*Single source Shortest Path
Viken Parikh
B2 1411099 */

#include<stdio.h>
#include<conio.h>
void main()
{
	int v,i,j,min,current,nv,source,dest,t,y,x;
	int INF=1000;
	int visited[50],path[50],distance[50];
	int adj[50][50];
	clrscr();
	printf("Enter no of vertices in the foll graph: ");
	scanf("%d",&v);
	printf("\n Entering the Adjacency/Cost matrix \n");
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		   {
		   printf("Is %d adjacent to %d ?\n",j,i);
	           printf("Enter weight of edge if yes ,0 for no :");
		   scanf("%d",&adj[i][j]);
		   }
	}
	printf("\n Initializing all arrays \n");
	for(i=1;i<=v;i++)
	   {
	    visited[i]=0;
            path[i]=0;
	    distance[i]=INF;
	   }
	printf("Enter the source vertex : ");
	scanf("%d",&source);
	current=source;
	visited[current]=1;
	nv=1;
	t=0;
	while(nv!=v)
	{
		for(i=1;i<=v;i++)
		{
            	if(adj[current][i]!=0)
		  {
		   if(visited[i]!=1)
		     {
		      if(distance[i]>adj[current][i]+t)
			 {
			 distance[i]=adj[current][i]+t;
			 path[i]=current;
			 }
		     }
	           }
		}
		min=INF;
		for(i=1;i<=v;i++)
		       {
			if(visited[i]!=1)
			  {
		           if(distance[i]<min)
			     {
			     min=distance[i];
			     current=i;
			      }
			  }
			}
		visited[current]=1;
		nv++;
		t=distance[current];
	}
	printf("Enter the destination index:  ");
	scanf("%d",&dest);
	printf("\n The shortest distance between source to destination is %d ",distance[dest]);
	printf("\n the shortest path is ");
	y=dest;
	printf("%d-",y);
	do
	{
		x=path[y];
		printf("-%d",x);
		y=x;
	}while(y!=source);
	getch();
}







/*Viken Parikh
B2 1411099  
Graph Coloring*/ 

#include<stdio.h>
#include<conio.h>
int graph[25][25],q[25];
void next_color(int t)
      {
       int r,s;
       q[t]=1;
       for(r=0;r<t;r++)
          { 
          if(graph[r][t]!=0 && q[t]==q[r])
             q[t]=q[r]+1;
          }
      }

void main()
  {
     int max,p,n,e,r,s,t,u;
     clrscr();
     printf("Enter no. of vertices : ");
     scanf("%d",&n);
     printf("Enter no. of edges : ");
     scanf("%d",&e);

     for(r=0;r<n;r++)
         for(s=0;s<n;s++)
             graph[r][s]=0;
     printf("Enter indexes where value is 1-->\n");
     for(r=0;r<e;r++)
        {
        scanf("%d %d",&t,&u);
        graph[t][u]=1;
        graph[u][t]=1;
        }

     for(r=0;r<n;r++)
         next_color(r);
     max=q[0];
     for(r=0;r<n;r++)
        {
        if(q[r]>max)
           max=q[r];
        }

     for(p=0;p<max;p++)
        {
         printf("Colors of vertices -->\n");
         for(r=0;r<n;r++)
             printf("Vertex[%d] : %d\n",r+1,((q[r]+p)%max+1));
        }
     getch();
}
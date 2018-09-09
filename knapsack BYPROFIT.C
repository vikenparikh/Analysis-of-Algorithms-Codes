/* Viken Parikh
B2 1411099*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;float w[50],capacity,t1;
	float m,p[50],profit,x[50],fraction,t2;
	clrscr();
	printf("enter the no of objects \n");
	scanf("%d",&n);
	printf("\n  entering weights and profits of each object \n");
	for(i=0;i<n;i++)
	{
		printf("\n weight of %d will be \n",i);
		scanf("%f",&w[i]);
		printf("\n profit of %d will be  \n",i);
		scanf("%f",&p[i]);
		printf("\n the weights of %d object is %f and its profit is %f",i,w[i],p[i]);
	}
	printf("\n enter capacity of knapsack \n");
	scanf(" %f",&m);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]<p[j+1])
			{
				t1=w[j]; w[j]=w[j+1]; w[j+1]=t1;
				t2=p[j]; p[j]=p[j+1]; p[j+1]=t2;
			}
		}
	}
	printf("\n initialisin the solution array \n");
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	}
	profit=0.0;
	capacity=m;
	for(i=0;i<n;i++)

	    if(capacity-w[i]>=0)
	    {
		capacity=capacity-w[i];
		profit=profit+p[i];
		x[i]=1.0;
	    }
	    else
		break;

       //	printf("\n if capacity is not full yet \n");
	if(capacity!=0)
	{
		fraction=capacity/w[i];
		capacity=capacity-w[i]*fraction;
		profit=profit+p[i]*fraction;
		x[i]=fraction;
	}
	printf("\n the solution array is : ");
	printf("(");
	for(i=0;i<n;i++)
	    printf(" %.3f",x[i]);
	printf(")");
	printf("\n the maximum profit by largest profit is %f",profit);
	getch();
}



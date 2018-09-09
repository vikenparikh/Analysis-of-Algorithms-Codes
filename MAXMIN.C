/*Viken Parikh
B2 1411099 */


#include<stdio.h>
#include<conio.h>
void maxmin(int x[],int l,int u,int *max,int *min)
{
	int mid,max1,min1;
	if(l==u)
		*max=*min=x[lb];
	else if(l==u-1)
	{
		if(x[l]>x[u])
		{
			*max=x[l];
			*min=x[u];
		}
		else
		{
			*max=x[u];
			*min=x[l];
		}
	}
	else
	{
		mid=(l+u)/2;
		maxmin(x,l,mid,max,min);
		maxmin(x,mid+1,u,&max1,&min1);
		if(max1>*max)
			*max=max1;
		if(min1<*min)
			*min=min1;
	}
}
void main()
{
	int v[50],i,n,max,min;
	clrscr();
	printf("    Enter the no of elements     /n");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
		printf("\n");
	}
	maxmin(v,0,n-1,&max,&min);
	printf("the max is %d \n",max);
	printf("the min is %d ",min);
	getch();
}
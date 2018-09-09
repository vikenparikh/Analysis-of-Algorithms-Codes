#include <stdio.h>
#include <conio.h>
#include <math.h>
int x[100];
int counter=0;
void NQueens(int k, int n);
int Place(int k, int i);
void main()
{
  int n;
  clrscr();
  printf("Enter the the Number of Queens to be place equal to the number of checkboxes");
  scanf("%d",&n);
  NQueens(1,n);
  printf("\nThe total number of solutions are %d",counter);
  getch();
}

void NQueens(int k, int n)
{       int i,j,l;
	for (i=1;i<=n;i++)
	    {
	    if(Place(k,i))
		{
		x[k]=i;
		if(k==n)
		  {
		    counter++;
                    for(j=1;j<=n;j++)
                       {
                    for(l=1;l<=n;l++)
                       {
                      if(l==x[j])
                         printf("%d ",x[j] );
                      else
                         printf("0 ");
                       }
		       printf(" \n");
		       }
		   printf("\n %d \n",counter);
                  }
                 else NQueens(k+1, n);
                 }
             }
}
int Place(int k, int i)
    {
    int j;
    for(j=1;j<k; j++)
	if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
	      return 0;
	      return 1;
 }

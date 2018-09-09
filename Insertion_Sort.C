#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void insertion (int [], int);
void main()
{
	int arr[30000], i, n=20000;
	time_t first, second;
	srand(time(NULL));
	clrscr();
	    /*printf("\n Enter the no. of elements:");
	    scanf("%d",&n);*/
	for(i=0; i<n; i++)
           {
	    //scanf("%d",&arr[i]);
	    arr[i]=rand();
	    fflush(stdin);
	    }
	first= time(NULL);
	insertion(arr, n);
	second=time(NULL);
	     /*printf("\n Sorted array is: ");
	for(i=0; i<n; i++)
	    printf(" %d ", arr[i]);*/
	printf(" \n The time difference is: %g", difftime(second, first) );
	getch();
}

void insertion(int a[], int n)
{
	int i, j, k, l;
	for(i=1; i<n; i++)
	{
		int j=i-1;
		k=a[i];
		while(a[j]>k&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	             /*	for(l=0; l<n;l++)
		           { 
                            printf(" %d ", a[l]);
                            printf("\n");
                             }*/
         }
}
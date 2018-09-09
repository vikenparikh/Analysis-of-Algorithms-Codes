#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void selection (int [], int);
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
	selection(arr, n);
	second=time(NULL);
	     /*printf("\n Sorted array is: ");
	for(i=0; i<n; i++)
	    printf(" %d ", arr[i]);*/
	printf(" \n The time difference is: %g", difftime(second, first) );
	getch();
}

void selection(int arr[], int n)
    {
    int i, j, smallest, l;
    for(i=0; i<n; i++)
       {
       smallest=i;
       for(j=i+1; j<n; j++)
          {
          if(arr[j]<arr[smallest])
          smallest=j;
           }
       l=arr[i];
       arr[i]=arr[smallest];
       arr[smallest]=l;
       /*for(l=0; l<n; l++)
          printf("%d ", arr[l]);
          printf("\n");*/
       }
    }
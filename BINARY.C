/*Viken Parikh
B2 1411099*/

#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void insertion (int [], int);
int binsearch(int [], int, int);

void main()
{
	time_t f,s;
	int a[30000],x,m,n,i;
	srand (time(NULL));

	clrscr();
	a[i]=rand();
	printf("\n Enter the number of array elements:");
                                    /*	scanf("%d", &n);
	                                printf("\n Enter the array elements:");
	                                for(i=0; i<n; i++)
	                                scanf("%d", &a[i]);*/
                                    /*	printf("\n Enter the number to be searched:");
	                                scanf("%d", &x);*/
	x=rand();
	first= time(NULL);
	insertion(a, n);
	printf("\n Sorted array is: ");
	for(i=0; i<n; i++)
	 printf("%d ", a[i]);
	m=binsearch(a, n, x);
	second=time(NULL);
	if(m==-1)
	 printf("\n NUMBER NOT FOUND");
	else
	 printf("\n Number found at position %d", m+1);
	printf("\n The time is: %f", difftime(s,f));
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

       }
}

int binsearch(int arr[], int n, int k)
{
	int high, low, mid;
	high=arr[n-1];
	low=arr[0];
	for(mid=(low+high)/2;low<=high;mid=(low+high)/2)
	{
		if(arr[mid]==k)
			return mid;
		else if(arr[mid]<k)
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}


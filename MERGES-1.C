/*Viken Parikh
B2 1411099*/

#include<stdio.h>
#include<conio.h>
void merge(int array[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;

    int L[100], H[100];
    for(i = 0; i < n1; i++)
	L[i] = array[low + i];
    for(j = 0; j < n2; j++)
	H[j] = array[mid + 1+ j];
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
	if (L[i] <= H[j])
	{
	    array[k] = L[i];
	    i++;
	}
	else
	{
	    array[k] = H[j];
	    j++;
	}
	k++;
    }


    while (i < n1)
    {
	array[k] = L[i];
	i++;
	k++;
    }

    while (j < n2)
    {
	array[k] = H[j];
	j++;
	k++;
    }
}

void mergeSort(int arrayay[], int low, int high)
{
    if (low < high)
    {
	int mid = low+(high-low)/2;
	mergeSort(array, low, mid);
	mergeSort(array, mid+1, high);
	merge(array, low, mid, high);

    }
}


void main()
{
	int m[100],i,n;
	clrscr();
	printf("\n Enter the number elements:");
	scanf("%d", &n);
	printf("\n Enter the %d elements:",n);
	for(i=0;i<n;i++)
	    scanf("%d", &a[i]);
	mergeSort(m,0,n-1);
	printf("\nThe sorted arrayay is : /n");
	for(i=0;i<n;i++)
	    printf("%d  ",m[i]);
	getch();
}
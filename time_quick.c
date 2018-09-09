/*Viken Parikh
B2 1411099*/

#include <stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

void Quick(int a[],int ql,int qu)
{
    int j;
    if(ql<qu)
    {
        j=split(a,ql,qu);
        Quick(a,ql,j-1);
        Quick(a,j+1,qu);
    }
}
 
int split(int a[],int ql,int qu)
{
    int qv,i,j,temp;
    qv=a[l];
    i=l;
    j=qu+1;
    do
    {
        do
            i++;
        while(a[i]<qv && i<=qu);
        do
            j--;
        while(qv<a[j]);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    while(i<j);
    a[l]=a[j];
    a[j]=v;
    return(j);
}
 
int main()
{
    int a[30000],n,i;
    time_t first, second;
    clrscr();
    printf("Enter no. of elements :");
    scanf("%d",&n);
                                               /*  printf("\nEnter array elements:");
                                               for(i=0;i<n;i++)
                                                  scanf("%d",&a[i]);*/

    for(i=0;i<n;i++)
	a[i]=rand();
fflush(stdin);
first= time(NULL);    
    Quick(a,0,n-1);
second=time(NULL);
                                         /*printf("\nArray after sorting:");
                                           for(i=0;i<n;i++)
                                              printf("%d ",a[i]); */
  printf(" \n The time difference is: %g", difftime(second, first) );
  getch();
  return 0;        
}
 

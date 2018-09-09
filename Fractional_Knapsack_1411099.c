/* Viken Parikh
B2 1411099*/

#include<stdio.h>

void insertionsort(double a[][2], int n);

int main()
{

	int c[10];
	 
        int w[10];
	
        int n, i, j;
	double wc[10][2];
	
        double mw;
	double mc=0;
	
        printf("Enter number of items\n");
	
        scanf("%d",&n);

	printf("Enter %d costs and weights\n", n);
	
        for(i=0;i<n;i++){
		
                         scanf("%d%d",&c[i],&w[i]);
	
                         }
	
        for(i=0;i<n;i++)
                        {
		
                        wc[i][0]=(c[i]*1.0)/w[i];
		        wc[i][1]=i;
	 
                        }
	insertionsort(wc, n);
	
        printf("Enter maximum weight in Knapsack\n");

	scanf("%lf",&mw);
        i=0;
	
        while(mw>0 && i<n){
                          j=(int)wc[i][1];
                          if(w[j]>=mw){
			
                          mc+=((mw*1.0/w[j])*c[j]);
			
                          mw=0;
		
                          }
		
       else{
			
       mc+=c[j]*1.0;
			
       mw-=w[j]*1.0;
		
       }
       i++;
	
                  }
	
       printf("Optimal cost is %lf\n",mc);
	
       return 0;

                }


void insertionsort(double a[][2], int n)
{
    int i, j;
    double tempval, tempi;
    for(i=1;i<n;i++) {
        tempval=a[i][0];
        tempi=a[i][1];
        j=i-1;
        while(j>=0 && a[j][0]<tempval) 
            {
            a[j+1][0]=a[j][0];
            a[j+1][1]=a[j][1];
            j--;
            }
        a[j+1][0]=tempval;
        a[j+1][1]=tempi;
    }
}

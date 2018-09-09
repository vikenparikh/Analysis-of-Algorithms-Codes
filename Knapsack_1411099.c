/* Viken Parikh
B2 1411099*/

#include<stdio.h>
#define max(a, b)(a>b)?a:b

int knapsack(int weight[], int profit[], int taken[], int n, int maxweight);
int main()
{
    int maxweight = 5;
    int n=3;
    int profit[] = {60, 100, 120};
    int weight[] = {1, 2, 3};
    int taken[3]={0};
    int i;
    int ans = knapsack(weight, profit, taken, n, maxweight);
    printf("Items taken of weight: ");
    for(i=0;i<3;i++) {
        if(taken[i])
            printf("%d ",weight[i]);
    }
    printf("for a profit of %d\.\n", ans);
    return 0;
}

int knapsack(int weight[], int profit[], int taken[], int n, int maxweight)
{
    int dp[n+1][maxweight+1];
    int i, j, flag;
    for(i=0;i<=n;i++) {
        for(j=0;j<=maxweight;j++) {
            if(i==0 || j==0) {
                dp[i][j]=0;
            }
            else if(weight[i-1]<=j) {
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-weight[i-1]]+profit[i-1]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    i=maxweight;
    flag=1;
    j=n;
    while(i>0 && flag){
        while(--j>=0 && dp[i][j]==dp[i][j+1])
            ;
        if(j<0)
            flag=0;
        else {
            i-=weight[j];
            taken[j]=1;
        }
    }
    return dp[n][maxweight];
}

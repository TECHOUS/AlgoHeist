#this program solves the knapsack problem in c++ landuage
#Function to return max value that can be put in knapsack of capacity W.
int knapSack(int W, int wt[], int val[], int n) 
{ 
   long int dp[n+1][W+1];
   int i,j;
   for(i=0;i<=n;i++)
   {
     for(j=0;j<=W;j++)
     {
        if(i==0|| j==0)
        dp[i][j]=0;
        else if(wt[i-1]>j)
        dp[i][j]=dp[i-1][j];
        else
        dp[i][j]=max(dp[i-1][j] , val[i-1]+dp[i-1][j-wt[i-1]]);
      }
    }
   return dp[n][W];
 }

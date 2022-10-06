#include<iostream>
using namespace std;

int knapSack(intn, int W, int wt[], int val[]) 
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
 
 void items(int n, int W, int wm[]) {
  int i = n;
  int j = W;

  while (i > 0 && j > 0) {
    if(cost[i][j] != cost[i-1][j]) {
      printf("%d\n",i);
      j = j-wm[i];
      i = i-1;
    }
    else {
      i = i-1;
    }
  }
}

 int main() {
  int wm[] = {0, 3, 2, 4, 1};
  int vm[] = {0, 8, 3, 9, 6};
  knapSack(4, 5, wm, vm);
  items(4, 5, wm);
  return 0;
}

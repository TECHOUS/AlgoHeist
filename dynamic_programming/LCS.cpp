
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int longestCommonSubsequence(string t1, string t2) {
        int n1 = t1.size(), n2 = t2.size();
        int dp[n1+1][n2+1];
        
        for(int i=0;i<n1+1;i++) dp[i][0]=0;
        
        for(int j=0;j<n2+1;j++) dp[0][j]=0;
        
        for(int i=1;i<n1+1;i++){
            for(int j=1;j<n2+1;j++){
                if(t1[i-1]==t2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                
                else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                
            }
        }
        
        return dp[n1][n2];
    }

int main(){
    string s1, s2;
  
    cin >> s1 >> s2;
  
   int res = longestCommonSubsequence(s1, s2);
  
   cout << res;
}

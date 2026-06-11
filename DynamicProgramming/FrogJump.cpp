############## Recursive way########
#include <bits/stdc++.h>
class Solution {
  public:
    int fun(int n,vector<int>&height){
        if(n==0)return 0;
        if(n<0)return 0;
        int one=abs(height[n]-height[n-1])+fun(n-1,height);
        int two=INT_MAX;
        
        if(n>1)two=abs(height[n]-height[n-2])+fun(n-2,height);
        
        return min(one,two);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        return fun(n-1,height);
        // Code here
        
    }
};
############### memoaization way##########
#include <bits/stdc++.h>
class Solution {
  public:
    int fun(int n,vector<int>&height,vector<int>&dp){
        if(n==0)return 0;
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int one=abs(height[n]-height[n-1])+fun(n-1,height,dp);
        int two=INT_MAX;
        
        if(n>1)two=abs(height[n]-height[n-2])+fun(n-2,height,dp);
        
        return dp[n]=min(one,two);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n+1,-1);
        
        return fun(n-1,height,dp);
        // Code here
        
    }
};
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

############## Tabulation ###########

#include <bits/stdc++.h>
class Solution {
	public:
// 	int fun(int n, vector<int>&height, vector<int>&dp) {

	int minCost(vector<int>& height) {
		int n = height.size();
		vector<int>dp(n , -1);
		
		dp[0] = 0;
		for (int i = 1; i<n; i++) {
			
			int one = abs(height[i]-height[i - 1]) + dp[i-1];
			int two = INT_MAX;
			
			if (i>1)two = abs(height[i]-height[i - 2]) + dp[i-2];
			
			dp[i]=min(one,two);
			
		}
		// Code here
		
		return dp[n-1];
		
	}
};

#include <bits/stdc++.h>
class Solution {
	public:

	int minCost(vector<int>& height) {
		int n = height.size();
		vector<int>dp(n , -1);
		
	    int prev2=0;
	    int prev1=0;
	    
		for (int i = 1; i<n; i++) {
			
			int one = abs(height[i]-height[i - 1]) + prev1;
			int two = INT_MAX;
			
			if (i>1)two = abs(height[i]-height[i - 2]) + prev2;
			
			int cur=min(one,two);
			
			prev2=prev1;
			prev1=cur;
			
		}
		// Code here
		
		return prev1;
		
	}
};
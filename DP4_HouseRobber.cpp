#include <bits/stdc++.h>
using namespace std;
    int f(int i, vector<int>nums, vector<int>&dp){
        if(i<0){
            return 0;
        }
        if(i==0){
            return nums[i];
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int pick=nums[i]+f(i-2,nums,dp);
        int npick=0+f(i-1,nums,dp);
        return dp[i]=max(pick,npick);
    }
    int main() {
        vector<int>nums={1,2,3,1};
        int n=nums.size();
        vector<int>dp(n+1,-1);
        
        cout<<"The Answer is:"<<f(n-1,nums,dp);
    }

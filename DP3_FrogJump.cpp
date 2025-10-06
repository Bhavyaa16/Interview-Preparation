#include <bits/stdc++.h>
using namespace std;
int minEnergy(int n,vector<int>&path, vector<int>&dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int left=minEnergy(n-1,path,dp)+abs(path[n]-path[n-1]);
    int right =INT_MAX;
    if(n>1){
        right=minEnergy(n-2,path,dp)+abs(path[n]-path[n-2]);
    }
    dp[n]= min(left , right);
    return dp[n];
   
}
int main(){
    vector<int>path={30,10,60,10,60,50};
    int n=path.size();
    vector<int>dp(n+1,-1);
    minEnergy(n-1,path,dp);
    cout<<"The minimum total energy will be: "<<dp[n-1];
    return 0;
}
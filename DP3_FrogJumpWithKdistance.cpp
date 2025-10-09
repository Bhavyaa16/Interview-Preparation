#include <bits/stdc++.h>
using namespace std;
int minEnergy(int n,vector<int>&path, vector<int>&dp,int k){
    if(n==0){
        return 0;
    }
    if(dp[n]!=INT_MAX){
        return dp[n];
    }
    for(int i=1;i<=k;i++){
        if(n-i>=0){
            int jumps=minEnergy(n-i,path,dp,k)+abs(path[n]-path[n-i]);
            dp[n]=min(jumps,dp[n]);
        }
    }
    
    return dp[n];
   
}
int main(){
    vector<int>path={30,10,60,10,60,50};
    int k=5;
    int n=path.size();
    vector<int>dp(n+1,INT_MAX);
    minEnergy(n-1,path,dp,k);
    cout<<"The minimum total energy will be: "<<dp[n-1];
    return 0;
}
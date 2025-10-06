vector<int>dp(n+1,-1);
    
    if(n==0||n==1||n==2){
        return n;
    }
    if(dp[n]==-1){
        dp[n]=cb(n-1)+cb(n-2);
    }
    return dp[n];
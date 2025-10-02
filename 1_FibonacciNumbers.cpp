#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    vector<int>dp(n+1,-1);
    if(n==0||n==1){
        return n;
    }
    if(dp[n]==-1){
        dp[n]=fib(n-1)+fib(n-2);
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    int ans=fib(n);
    cout<<ans;
    return 0;
}
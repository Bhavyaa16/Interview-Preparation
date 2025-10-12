#include <bits/stdc++.h>
using namespace std;
    int f(vector<int>n){
        vector<int>dp(n.size()+1,-1);
        dp[0]=n[0];
        for(int i=1;i<n.size();i++){
            int pick=n[i];
            if(i-2>=0){
                pick+=dp[i-2];
            }
            int npick=dp[i-1];
            dp[i]=max(pick,npick);
        }
        return dp[n.size()-1];
    }
    int main() {
        vector<int>nums={4,1,2,5,9};
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>temp1,temp2;
        
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        int ans= max(f(temp1),f(temp2));
        cout<<"The Answer is: "<<ans;
    }

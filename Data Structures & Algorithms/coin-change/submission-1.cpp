class Solution {
public:
    int mincoinstomakeamount(vector<int>& coins, int amount,vector<int>&dp){
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        int ans = 1e9;
        for(int c:coins){
            if(amount>=c) ans=min(ans,mincoinstomakeamount(coins,amount-c,dp)+1);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int ans = mincoinstomakeamount(coins,amount,dp);
        if(ans==1e9) return -1;
        return ans;
    }
};

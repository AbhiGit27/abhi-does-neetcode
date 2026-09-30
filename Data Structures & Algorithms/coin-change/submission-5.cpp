class Solution {
public:
    int mincoinstomakeamount(vector<int>& coins, int amount,vector<int>&dp){
        int INF = 1e9;
        if(amount==0){
            dp[0]=0;
            return dp[0];
        }
        if(amount<0) return INF;
        if(dp[amount]!=-1) return dp[amount];
        int ans=1e9;
        for(int c:coins){
            ans = min(ans,mincoinstomakeamount(coins,amount-c,dp)+1);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
      vector<int>dp(amount+1,-1);
      int ans= mincoinstomakeamount(coins,amount,dp);
      if(ans==1e9) return -1;
      else return ans;
    }
};

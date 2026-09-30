class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,1e9);
        dp[0]=0;
        for(int s=1;s<=amount;s++){
            for(int c:coins){
                if(s>=c) dp[s]=min(dp[s],dp[s-c]+1);
            }
        }
        if(dp[amount]==1e9) return -1;
        else return dp[amount];
    }
};

class Solution {
public:
    int solve(int i,string s, vector<string>& wordDict,vector<int>&dp){
        if(i==s.size()) return true;
        if(dp[i]!=-1) return dp[i];
        for(string word:wordDict){
            if(i+word.size()<=s.size() && s.substr(i,word.size())==word){
                if(solve(i+word.size(),s,wordDict,dp) == true) return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<int>dp(n,-1);
        return solve(0,s,wordDict,dp);
    }
};

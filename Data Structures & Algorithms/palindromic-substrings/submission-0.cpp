class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        int count=n;
        for(int l=2;l<=n;l++){
            for(int i=0;i<n-l+1;i++){
                int j=i+l-1;
                if(s[i]==s[j] and (dp[i+1][j-1]==true or l==2)){
                    dp[i][j]=true;
                    count++;
                }
            }
        }
        return count;
    }
};

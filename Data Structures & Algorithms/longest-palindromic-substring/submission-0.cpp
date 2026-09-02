class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n+1,vector<bool>(n+1,false));
        int maxlen=1;
        int start=0;
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        for(int l=2;l<=n;l++){
            for(int i=0;i<n-l+1;i++){
                int j = i+l-1;
                if(s[i]==s[j] && (dp[i+1][j-1] or l==2)){
                    dp[i][j]=true;
                    
                    maxlen=l;
                    start=i;
                }
            }
        }
        return s.substr(start,maxlen);
    }
};

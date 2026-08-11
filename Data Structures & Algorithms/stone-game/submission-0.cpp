class Solution {
public:
    int ans(vector<int>& p,int i,int j,vector<vector<int>>& dp){
        if(i>j)return 0;

        if(dp[i][j]!=-1)return dp[i][j];

        int l=p[i]-ans(p,i+1,j,dp);
        int r=p[j]-ans(p,i,j-1,dp);

        return dp[i][j]=max(l,r);
    }

    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));

        return ans(piles,0,n-1,dp)>0;
    }
};
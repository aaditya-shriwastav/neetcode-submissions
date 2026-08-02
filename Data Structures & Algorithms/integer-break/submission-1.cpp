class Solution {
public:
int ans(int n,int cnt,vector<vector<int>>&dp){
    if(n==0){
        if(cnt>=2)
        return 1;

        return 0;

    }
    if(dp[n][cnt]!=-1)return dp[n][cnt];

    int maxi=0;


    for(int i=1;i<=n;i++){
      
        maxi=max(maxi,i*ans(n-i,cnt+1,dp));


    }

    return dp[n][cnt]=maxi;

}
    int integerBreak(int n) {

        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));


        return ans(n,0,dp);

        

    }
};
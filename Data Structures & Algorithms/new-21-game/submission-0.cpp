class Solution {
public:

double ans(int n,int k,int maxPts,int score,vector<double>&dp){
    if(score>=k){
        if(score<=n)return 1;
        return 0;
    }

if(dp[score]!=-1.0)return dp[score];

double prob=0;

    for(int i=1;i<=maxPts;i++){
       prob+=ans(n,k,maxPts,score+i,dp);


    }

    return dp[score]=prob/maxPts;

}
    double new21Game(int n, int k, int maxPts) {

        vector<double>dp(k,-1.0);
        

        return ans(n,k,maxPts,0,dp);


        
    }
};
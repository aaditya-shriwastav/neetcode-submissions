class Solution {
public:
int ans(vector<int>&prices,int ind,bool x,vector<vector<int>>&dp){

if(ind>=prices.size()){
    return 0;

}
if(dp[ind][x]!=-1)return dp[ind][x];

int take=0,nottake=0;

    if(x){
        take=-prices[ind]+ans(prices,ind+1,!x,dp);


    }
    else{
        take=prices[ind]+ans(prices,ind+2,!x,dp);

    }

    nottake=ans(prices,ind+1,x,dp);


    return dp[ind][x]= max(take,nottake);

}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        vector<vector<int>>dp(n+1,vector<int>(2,-1));



        return ans(prices,0,true,dp);

        
    }
};

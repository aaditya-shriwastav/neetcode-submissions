class Solution {
public:

int ans(vector<int>&coins,int amount,int ind,  vector<vector<int>>&dp){
    if(ind==coins.size()){
        if(amount==0)return 0;
        else return 1e9;

    }

    if(amount==0)return 0;

    if(dp[ind][amount]!=-1)return dp[ind][amount];




    int take=1e9,nottake=1e9;

    nottake=ans(coins,amount,ind+1,dp);

    if(ind<coins.size() && amount-coins[ind]>=0){
        take=1+ans(coins,amount-coins[ind],ind,dp);


    }
    return dp[ind][amount]=min(take,nottake);


}
    int coinChange(vector<int>& coins, int amount) {

        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));



     if(ans(coins,amount,0,dp)!=1e9){
        return ans(coins,amount,0,dp);

     }

     return -1;


        
    }
};

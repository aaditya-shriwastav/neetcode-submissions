class Solution {
public:
int ans(int i,vector<int>& prices,bool x,  vector<vector<int>>&dp){

if(i==prices.size()){
 return 0;

}
// buy
if(x){
if(dp[i][0]!=-1e9){
    return dp[i][0];
    
}
}
else{
if(dp[i][1]!=-1e9){
    return dp[i][1];
    
}
}



if(x){
return dp[i][0]=max(-prices[i]+ans(i+1,prices,!x,dp),ans(i+1,prices,x,dp));

}
else{
    return dp[i][1]=max(+prices[i]+ans(i+1,prices,!x,dp),ans(i+1,prices,x,dp));

}




}
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1e9));

        return ans(0, prices,true,dp);
    }
};
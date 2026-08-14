class Solution {
public:

int ans(int i ,int j,vector<int>& nums,vector<vector<int>>&dp){
    if(i>j)return 0;
    int maxi=-1e9;

    if(dp[i][j]!=-1)return dp[i][j];

    for(int ind=i;ind<=j;ind++){

int cost=nums[ind]*nums[i-1]*nums[j+1]+ans(i,ind-1,nums,dp)+ans(ind+1,j,nums,dp);
maxi=max (maxi,cost);

    }

    return dp[i][j]= maxi;

}
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
      nums.insert(nums.begin(),1);
      vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));



        return ans(1,nums.size()-2,nums,dp);
        
    }
};

class Solution {
public:

int  ans(vector<int>&nums,int ind,vector<int>&dp){

    if(ind>=nums.size()){
        return 0;

    }
    if(dp[ind]!=-1)return dp[ind];


int nottake=0,take=0;

     nottake=ans(nums,ind+1,dp);
     
     take=nums[ind]+ans(nums,ind+2,dp);


     return dp[ind]=max(take,nottake);




}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);



       return  ans(nums,0,dp);




    }
};

class Solution {
public:

int  ans(vector<int>&nums,int ind,vector<int>&dp,int n){

    if(ind>=n){
        return 0;

    }
    if(dp[ind]!=-1)return dp[ind];


int nottake=0,take=0;

     nottake=ans(nums,ind+1,dp,n);
     
     take=nums[ind]+ans(nums,ind+2,dp,n);


     return dp[ind]=max(take,nottake);




}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n,-1),dp2(n,-1);
        if(n==1)return nums[0];
        



       return  max(ans(nums,1,dp1,n),ans(nums,0,dp2,n-1));




    }
};
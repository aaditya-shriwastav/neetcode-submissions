class Solution {
public:
bool ans(vector<int>&nums,int n,int ind,vector<int>&dp){
    
if(ind==n-1)return true;

if(dp[ind]!=-1)return dp[ind];


    for(int i=ind+1;i<=nums[ind]+ind && i<n;i++){

    if(ans(nums,n,i,dp))return true;


    }
    return false;

}
    bool canJump(vector<int>& nums) {
       int n=nums.size();
   vector<int>dp(n,-1);
       return ans(nums,n,0,dp);
      



    }
};

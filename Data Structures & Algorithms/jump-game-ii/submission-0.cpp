class Solution {
public:
 int ans(vector<int>&nums,int n,int ind,vector<int>&dp){
    
if(ind==n-1)return 0;

if(dp[ind]!=-1)return dp[ind];
int mini=1e9;



    for(int i=ind+1;i<=nums[ind]+ind && i<n;i++){

    mini=min(ans(nums,n,i,dp),mini);



    }
    return dp[ind]=1+mini;


}
    int jump(vector<int>& nums) {
            int n=nums.size();
   vector<int>dp(n,-1);
       return ans(nums,n,0,dp);  
    }
};


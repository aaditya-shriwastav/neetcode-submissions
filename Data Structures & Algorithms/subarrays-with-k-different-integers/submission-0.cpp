class Solution {
public:
int ans(vector<int>&nums,int k){
      int n=nums.size();
        unordered_map<int,int>mp;
        int ans=0;

        int i=0,j=0;
        while(j<n){
            mp[nums[j]]++;

            while(i<n && mp.size()==k){
                
                ans+=n-j;
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;


                
            }
            j++;
            
        }
        return ans;


}

    int subarraysWithKDistinct(vector<int>& nums, int k) {
      int x=ans(nums,k);
      int y=ans(nums,k+1);
      return x-y;


    }
};
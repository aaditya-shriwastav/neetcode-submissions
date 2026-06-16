class Solution {
public:

bool ans(vector<int>&nums,int k,vector<int>&kv,int ind,int tar){
    if(ind==nums.size()){
        for(int i=0;i<k;i++){
            if(kv[i]!=tar)return false;

        }
        return true;

    }

    for(int i=0;i<k;i++){
        if(nums[ind]+kv[i]<=tar){
      kv[i]+=nums[ind];


            if(ans(nums,k,kv,ind+1,tar))return true;
          kv[i]-=nums[ind];


        }
    }
    return false;

}
    bool canPartitionKSubsets(vector<int>& nums, int k) {



        vector<int>kv(k);
        int sum=accumulate(nums.begin(),nums.end(),0);

        if(sum%k)return false;
        int tar=sum/k;
        sort(nums.rbegin(),nums.rend());


        return ans(nums,k,kv,0,tar);




        
    }
};
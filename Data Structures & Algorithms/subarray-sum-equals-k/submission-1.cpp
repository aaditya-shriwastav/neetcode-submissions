class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n);
        int sum=0;
        map<int,int>mp;

        mp[0]=1;


int ans=0;

        for(int i=0;i<n;i++){
sum+=nums[i];

pre[i]=sum;
mp[sum]++;
if(mp.find(sum-k)!=mp.end()){
ans+=mp[sum-k];

}



        }
        if(k==0){
            return ans-n;
            
        }
        return ans;

    }
};
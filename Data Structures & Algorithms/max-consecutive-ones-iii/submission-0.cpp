class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n=nums.size();

    vector<int>pre(n+1);
    int sum=0;

    for(int i=0;i<n;i++){
if(nums[i]==0){
    sum++;

}
pre[i+1]=sum;

    }
    int maxi=0;

    for(int i=0;i<=n;i++){
        int x =lower_bound(pre.begin(),pre.end(),pre[i]-k)-pre.begin();
maxi=max(maxi,i-x);

    }
    return maxi;
    

    }
};
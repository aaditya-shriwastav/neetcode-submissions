class Solution {
public:

void ans(vector<int>&nums,vector<int>&dans, vector<vector<int>>&anss,int target,int sum,int i){

if(sum>target || i==nums.size())return;
if(sum==target){
    anss.push_back(dans);
    return;

}

dans.push_back(nums[i]);

ans(nums,dans,anss,target,sum+nums[i],i);
dans.pop_back();

ans(nums,dans,anss,target,sum,i+1);

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>anss;
        vector<int>dans;
        ans(nums,dans,anss,target,0,0);

        return anss;


    }
};

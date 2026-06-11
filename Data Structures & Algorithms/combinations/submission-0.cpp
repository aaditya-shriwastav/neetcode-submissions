class Solution {
public:


void ans(vector<int>&nums,vector<int>&dans, vector<vector<int>>&anss,int target,int sum,int i){
if(i==nums.size()){
    if(sum==target)
    {
        anss.push_back(dans);
return;
    }
    return;

}

if(sum==target){
anss.push_back(dans);
return;

}

dans.push_back(nums[i]);

ans(nums,dans,anss,target,sum+1,i+1);
dans.pop_back();

ans(nums,dans,anss,target,sum,i+1);

}

    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>>anss;
       vector<int>nums(n);
       for(int i=0;i<n;i++){
        nums[i]=i+1;
        
       }
        vector<int>dans;
        ans(nums,dans,anss,k,0,0);

        return anss;  
    }
};
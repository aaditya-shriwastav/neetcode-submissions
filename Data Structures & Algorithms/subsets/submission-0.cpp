class Solution {
public:
void ans(vector<int>&nums,vector<vector<int>>&anss,vector<int>&dans,int i){

    if(i==nums.size()){
        anss.push_back(dans);
        return;


    }

    dans.push_back(nums[i]);
    ans(nums,anss,dans,i+1);
    dans.pop_back();


    ans(nums,anss,dans,i+1);


}

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>anss;
        vector<int>dans;

       ans(nums,anss,dans,0);

       return anss;



    }
};

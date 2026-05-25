class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int i=0,j=0;
        while(j<n && i<n){
            while(i<n && nums[i]<0){
i++;

            }
            while(j<n && nums[j]>0){
                j++;

            }
            
            if(i<n && j<n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            }
            i++,j++;
            

        }
        return ans;



    }
};
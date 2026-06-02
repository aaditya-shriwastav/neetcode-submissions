class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int start=0,end=n-1;
        int ans=0;

        while(start<=end){
            int mid=(start+end)/2;
            if(mid-1>=0 && nums[mid]<nums[mid-1]){
ans=nums[mid];
break;

            }

            else{
                if(nums[mid]>nums[n-1]){
                    start=mid+1;

                }
                else {
                    ans=nums[mid];
                    end=mid-1;

                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size();
        int i=0,j=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=target){
                return 1;

            }
sum+=nums[i];

        }
        if(sum<target){
            return 0;

        }
        sum=0;

        int mini=n;



        while(j<n){
                sum+=nums[j];
    

            while(sum-nums[i]>=target){
                sum=sum-nums[i];
                 i++;
     mini=min(mini,j-i+1);

            }
            j++;

           
         

     



        }
        return mini;

    }
};
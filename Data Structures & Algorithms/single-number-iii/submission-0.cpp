class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();

        int xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^nums[i];


        }
        int storebit;

        int x=xorr&(-xorr);
        for(int i=0;i<32;i++){
            if((x>>i) & 1){
                storebit=i;


            }

        }
        int ans1=0,ans2=0;

        for(int i=0;i<n;i++){
            if((nums[i]>>storebit) & 1){
                ans1=ans1^nums[i];


            }
            else{
                ans2=ans2^nums[i];

            }
        }

        return {ans1,ans2};


        
    }
};
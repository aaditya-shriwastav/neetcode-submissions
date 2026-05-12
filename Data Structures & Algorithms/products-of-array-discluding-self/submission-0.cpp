class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();
int cz=0;
int pro=1;


for(int i=0;i<n;i++){
pro=pro*nums[i];
if(nums[i]==0){
    cz++;
}
}

vector <int>ans(n);
for(int i=0;i<n;i++){
    if(nums[i]!=0){
        if(nums[i]<0){
            int x=pro/abs(nums[i]);
            ans[i]=-x;

        }

        else{
            ans[i]=pro/nums[i];

        }
    }
    else{
        if(cz>1){
            ans[i]=0;

        }
        else{
            int pro1=1;

            for(int i=0;i<n;i++){
                if(nums[i]!=0){
pro1=pro1*nums[i];

                }
            }
            ans[i]=pro1;

        }
    }
}

return ans;



    }
};

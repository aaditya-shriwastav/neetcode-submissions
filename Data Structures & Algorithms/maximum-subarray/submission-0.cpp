class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int n=nums.size();
vector<int>dummy(n);
int sum=0;
bool sign=false;


for(int i=0;i<n;i++){
    if(nums[i]>=0)sign=true;

    sum+=nums[i];

    if(sum>=0){
      dummy[i]=sum;

    }
    else{
        sum=0;   
    }
}

if(!sign){
    return *max_element(nums.begin(),nums.end());
}



return *max_element(dummy.begin(),dummy.end());

    }
};

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
     
        int start=0,end=std::accumulate(nums.begin(),nums.end(),0);

  int ans;
while(start<=end){
    int mid=(end-start)/2+start;
    int sum=0;
    int cnt=1;
    bool x=true;
  





    for(int i=0;i<n;i++){
        if(sum+nums[i]<=mid){
            sum+=nums[i];

        }
        else{
            if(nums[i]<=mid){
            sum=nums[i];
            cnt++;
            }
            else 
            {
                x=false;

            break;
            }



        }
    }
    if(x && cnt<=k){
ans=mid;
end=mid-1;
    }
    else{
        start=mid+1;

    }

}
return ans;


    }
};
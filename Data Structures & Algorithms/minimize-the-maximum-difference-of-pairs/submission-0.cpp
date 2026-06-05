class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums .end());
        int start=0,end=nums.back()-nums[0];
        int ans=0;

        while(start<=end){
            int mid=((end-start)/2)+start;
            int i=0,cnt=0;
        bool a=false;

            while(i<n){
                if(i+1<n &&  nums[i+1]-nums[i]<=mid){
cnt++;
i+=2;


                }
                else{
                    i++;

                }
                if(cnt==p){
a=true;
break;

                }

            }
            if(a){
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
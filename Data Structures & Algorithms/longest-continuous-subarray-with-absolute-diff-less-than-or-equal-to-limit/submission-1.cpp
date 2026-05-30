class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        int maxi=1;
        deque<int>dq1,dq2;
        int i=0,j=0;
        while(j<n){
      
      while(!dq1.empty() && nums[dq1.back()]<=nums[j]){
        dq1.pop_back();

      }
      dq1.push_back(j);
            
      while(!dq2.empty() && nums[dq2.back()]>=nums[j]){
        dq2.pop_back();

      }
      dq2.push_back(j);


      while(i<n && nums[dq1.front()]-nums[dq2.front()]>limit){
        if(i==dq1.front()){
dq1.pop_front();

        }
         if(i==dq2.front()){
dq2.pop_front();

        }

        i++;

      }
      maxi=max(maxi,j-i+1);

      j++;

        }
        return maxi;

    }
};
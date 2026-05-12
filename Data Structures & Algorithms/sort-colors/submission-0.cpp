class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();

      vector<int>a(3);
      vector<int>ans;
      for(int i=0;i<n;i++){
a[nums[i]]++;

      } 
      for(int i=0;i<3;i++){
        while(a[i]--){
ans.push_back(i);

        }
      }
      nums=ans; 
    }
};
class Solution {
public:
void ans(vector<int>& nums,vector<vector<int>>&anss,vector<int>&visited, vector<int>&temp){
    if(nums.size()==temp.size()){
        anss.push_back(temp);
        return;

    }

for(int i=0;i<visited.size();i++){
    if(visited[i]==0){
        visited[i]=1;
        temp.push_back(nums[i]);
        ans(nums,anss,visited,temp);
        temp.pop_back();
        visited[i]=0;

    }


}

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n=nums.size();
       

        vector<int>visited(n);
        vector<int>temp;
        vector<vector<int>>anss;


        ans(nums,anss,visited,temp);
         set<vector<int>>st(anss.begin(),anss.end());
         vector<vector<int>>anss1;

         for(auto it:st){
anss1.push_back(it);

         }
         return anss1;



    



    }
};
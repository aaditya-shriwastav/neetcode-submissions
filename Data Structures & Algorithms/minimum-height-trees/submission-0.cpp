class Solution {
public:


int dfs(vector<vector<int>>&adj,int ind ,vector<int>&visited){
    visited[ind]=1;
    int maxi=0;


    for(auto it:adj[ind]){
        if(!visited[it]){
            maxi=max(maxi,dfs(adj,it,visited));
        }
        
    }
    visited[ind]=0;


    return maxi+1;

}
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
              adj[it[1]].push_back(it[0]);

        }

        vector<int>store(n);


        vector<int>visited(n);
        for(int i=0;i<n;i++){
            if(!visited[i]){
store[i]=dfs(adj,i,visited);

            }
        }


        int mini=*min_element(store.begin(),store.end());


      
vector<int>ans;
for(int i=0;i<n;i++){
    if(store[i]==mini){
        ans.push_back(i);

    }

}

return ans;

        
    }
};
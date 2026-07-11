class Solution {
public:

bool dfs(vector<vector<int>>&adj,vector<int>&visi,
vector<int>&pathvisi,int numCourses,int ind){

    visi[ind]=1 ;
    pathvisi[ind]=1;

    for(auto it:adj[ind]){
        if(visi[it] && pathvisi[it]){
            return false;

        }
if(!visi[it])
        if(!dfs(adj,visi,pathvisi,numCourses,it))return false;

    }

    pathvisi[ind]=0;
    return true;


}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

       vector<vector<int>>adj(numCourses);

       for(auto it:prerequisites){
        adj[it[1]].push_back(it[0]);

       }
       vector<int>visi(numCourses);
       vector<int>pathvisi(numCourses);
       for(int i=0;i<numCourses;i++){
        if(!visi[i]){
            if(!dfs(adj,visi,pathvisi,numCourses,i))return false;



        }

       } 

       return true;

    }
};

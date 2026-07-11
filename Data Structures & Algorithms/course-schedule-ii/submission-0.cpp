class Solution {
public:

bool topo(vector<vector<int>>&adj,vector<int>&visi,int ind,stack<int>&st,
vector<int>&pathvisi){

visi[ind]=1;
pathvisi[ind]=1;


for(auto it:adj[ind]){
    if(pathvisi[it])return false;

if(!visi[it]){
    if(!topo(adj,visi,it,st,pathvisi))return false;


}
}

st.push(ind);
pathvisi[ind]=0;

return true;
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
       vector<vector<int>>adj(numCourses);

       for(auto it:prerequisites){
        adj[it[1]].push_back(it[0]);

       }
       vector<int>visi(numCourses);
       vector<int>pathvisi(numCourses);
       stack<int>st;
vector<int>ans;

       for(int i=0;i<numCourses;i++){
        if(!visi[i])
{
    if(topo(adj,visi,i,st,pathvisi)==false)return ans;


}       }



while(!st.empty()){
ans.push_back(st.top());
st.pop();

}

return ans;

    }
};

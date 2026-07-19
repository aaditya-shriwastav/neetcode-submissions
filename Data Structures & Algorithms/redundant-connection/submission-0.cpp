class Solution {
public:

int findup(int x,vector<int>&parent){
    if(parent[x]==x){
        return x;

    }

    return parent[x]=findup(parent[x],parent);

}

void unite(int x,int y,vector<int>&parent,vector<int>&rank){

    int upx=findup(x,parent);
    int upy=findup(y,parent);

    if(upx!=upy){
        if(rank[upx]>rank[upy])parent[upy]=upx;
        else if(rank[upy]>rank[upx])parent[upx]=upy;
        else
        parent[upy]=upx,rank[upx]++;



    }

}

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
       int n =edges.size()+1 ;
       vector<int>parent(n),rank(n);
       for(int i=0;i<n;i++){
        parent[i]=i;

       }
       vector<int>ans;

       for(auto it:edges){
        int x=it[0];
        int y=it[1];
        if(findup(x,parent)==findup(y,parent)){
            ans.push_back(x);
            ans.push_back(y);

        }
       unite(x,y,parent,rank);

       }

       return ans;




    }
};

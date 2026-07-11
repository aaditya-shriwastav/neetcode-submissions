class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
vector<vector<int>>adj(n);

for(auto it:edges){
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);

}

vector<int>visited(n);
vector<int>parent(n,-1);


queue<int>q;
int cnt=0;

for(int i=0;i<n;i++){
    if(!visited[i]){
        q.push(i);
        visited[i]=1;
        cnt++;




while(!q.empty()){
    int currnode=q.front();
    q.pop();

    for(auto it:adj[currnode]){
        if(visited[it] && parent[currnode] != it){
            cout<<it<<endl;
            return false;

        }
        if(!visited[it]){
        q.push(it);
        parent[it]=currnode;
        visited[it]=1;

        }


    }
}

}
}


if(cnt>1)return false;


return true;




    }
};

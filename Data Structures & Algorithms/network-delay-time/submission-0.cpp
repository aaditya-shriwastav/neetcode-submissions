class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<vector<pair<int,int>>>adj(n+1);


       for(auto it:times){
        adj[it[0]].push_back({it[1],it[2]});

       } 

       priority_queue<pair<int,int>,vector<pair<int,int>>,
       greater<pair<int,int>>>pq;

vector<int>dist(n+1,1e9);

       pq.push({0,k});
       dist[k]=0;
       dist[0]=0;





       while(!pq .empty()){
        int time=pq .top().first;
        int node=pq.top().second;

        pq.pop();

        for(auto it:adj[node]){
            if(time+it.second<dist[it.first]){
                dist[it.first]=time+it.second;
                pq.push({time+it.second,it.first});

            }

        }

       }

       int maxi=-1e9;

       for(int i=0;i<n+1;i++){
        cout<<dist[i]<<" ";

       }


       for(int i=0;i<n+1;i++){
        if(dist[i]==1e9)return -1;

        maxi=max(maxi,dist[i]);


       }

       return maxi;

    }
};

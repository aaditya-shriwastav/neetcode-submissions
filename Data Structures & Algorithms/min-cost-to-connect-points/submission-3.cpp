class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
       int n=points.size();
       vector<vector<pair<int,int>>>adj(n);


       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int dis=abs(points[i][0]-points[j][0])+
            abs(points[i][1]-points[j][1]);
            adj[i].push_back({j,dis});
            adj[j].push_back({i,dis});


        }
       } 

       priority_queue<pair<int,int>,vector<pair<int,int>>,
       greater<pair<int,int>>>pq;


       pq.push({0,0});
       vector<int>visited(n);
   
    
       
int cnt=0;


       while(!pq.empty()){
        int curredge=pq.top().first;
        int currnode=pq.top().second;
           pq.pop();
        if(visited[currnode]==0){
        visited[currnode]=1;
        cnt+=curredge;

        }

        else continue;
        

        




     

        for(auto it:adj[currnode]){
            if(!visited[it.first])
      
                pq.push({it.second,it.first});
               
        }
       }
       return cnt;

    }
};

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>>adj(n);
int k=0;

      for(auto it:edges){
        adj[it[0]].push_back({it[1],succProb[k]});
        adj[it[1]].push_back({it[0],succProb[k]});
        k++;

      }

      vector<double>finalprob(n,0);

      priority_queue<pair<double,int>>pq;

      pq.push({1,start_node});
      finalprob[start_node]=1;


      while(!pq.empty()){
        double currprob=pq.top().first;
        int currnode=pq.top().second;

        pq.pop();

        for(auto it:adj[currnode]){
            if(currprob*it.second>finalprob[it.first]){
                finalprob[it.first]=currprob*it.second;
                pq.push({currprob*it.second,it.first});

            }

        }

      }

      return finalprob[end_node];



    }
};
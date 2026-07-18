class Solution {
public:

    double dfs(map<string, vector<pair<string,double>>>& adj,
               map<string,bool>& visited,
               string src, string dest) {

        if(src == dest) return 1.0;

        visited[src] = true;

        for(auto &it : adj[src]) {
            string next = it.first;
            double weight = it.second;

            if(!visited[next]) {
                double res = dfs(adj, visited, next, dest);

                if(res != -1.0) {
                    return weight * res;
                }
            }
        }

        return -1.0;
    }

    vector<double> calcEquation(vector<vector<string>>& equations,
                               vector<double>& values,
                               vector<vector<string>>& queries) {

        map<string, vector<pair<string,double>>> adj;

        // Build graph
        for(int i = 0; i < equations.size(); i++) {
            string a = equations[i][0];
            string b = equations[i][1];

            adj[a].push_back({b, values[i]});
            adj[b].push_back({a, 1.0 / values[i]});
        }

        vector<double> ans;

        for(auto &q : queries) {
            string src = q[0];
            string dest = q[1];

            // If variable doesn't exist
            if(adj.find(src) == adj.end() || adj.find(dest) == adj.end()) {
                ans.push_back(-1.0);
                continue;
            }

            map<string,bool> visited;
            double result = dfs(adj, visited, src, dest);

            ans.push_back(result);
        }

        return ans;
    }
};
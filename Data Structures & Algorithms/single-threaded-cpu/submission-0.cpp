class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {

        int n = tasks.size();

        for (int i = 0; i < n; i++) {
            tasks[i].push_back(i); // store original index
        }

        sort(tasks.begin(), tasks.end());

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        vector<int> ans;

        long long time = tasks[0][0];
        int i = 0;

        while (i < n || !pq.empty()) {

            while (i < n && tasks[i][0] <= time) {
                pq.push({tasks[i][1], tasks[i][2]}); // {processingTime, index}
                i++;
            }

            if (pq.empty()) {
                time = tasks[i][0];
                continue;
            }

            auto curr = pq.top();
            pq.pop();

            ans.push_back(curr.second);

            time += curr.first;
        }

        return ans;
    }
};
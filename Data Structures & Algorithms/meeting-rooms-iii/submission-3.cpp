class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        int si = meetings.size();

        sort(meetings.begin(), meetings.end());

        priority_queue<pair<long long,int>, vector<pair<long long,int>>,
        greater<pair<long long,int>>> pq;

        priority_queue<int, vector<int>, greater<int>> freeRooms;

        map<int,int> mp;

        for(int i = 0; i < n; i++)
            freeRooms.push(i);

        for(int i = 0; i < si; i++){

            while(!pq.empty() && pq.top().first <= meetings[i][0]){
                freeRooms.push(pq.top().second);
                pq.pop();
            }

            if(pq.size() == n){
                long long a = pq.top().first;
                int b = pq.top().second;
                pq.pop();

                long long duration = meetings[i][1] - meetings[i][0];
                pq.push({a + duration, b});
                mp[b]++;

            } else {
                int room = freeRooms.top();
                freeRooms.pop();
                pq.push({meetings[i][1], room});
                mp[room]++;
            }
        }

        int maxi = 0;
        for(auto it : mp){
            maxi = max(maxi, it.second);
        }

        int ans = -1;
        for(auto it : mp){
            if(it.second == maxi){
                ans = it.first;
                break;
            }
        }

        return ans;
    }
};
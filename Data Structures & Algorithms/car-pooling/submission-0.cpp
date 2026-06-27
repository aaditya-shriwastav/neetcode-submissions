class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    int n=trips.size();
    for(int i=0;i<n;i++){
        swap(trips[i][0],trips[i][1]);
        swap(trips[i][1],trips[i][2]);

    }
    sort(trips.begin(),trips.end());


    priority_queue<pair<int,int>,vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    int capa=0;

    for(int i=0;i<n;i++){

while(!pq.empty() && pq.top().first<=trips[i][0]){
    capa-=pq.top().second;
    
    pq.pop();

}

pq.push({trips[i][1],trips[i][2]});
capa+=trips[i][2];

if(capa>capacity){
    return false;

}



    }

    return true;



    }
};
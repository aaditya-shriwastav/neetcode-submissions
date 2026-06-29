class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        int n=intervals.size();
        int m=queries.size();
        vector<pair<int,int>>queries2(m);

        for(int i=0;i<m;i++){
queries2[i]={queries[i],i};

        }

        sort(intervals.begin(),intervals.end());
        sort(queries2.begin(),queries2.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,
        greater<pair<int,int>>>pq;
        vector<int>ans(m);



        int i=0 ,j=0;
        while(j<m){

            while(i<n && intervals[i][0]<=queries2[j].first){
                int left=intervals[i][0];
                int right=intervals[i][1];
                pq.push({right-left+1,right});
                i++;
            }


            while(!pq.empty() && pq.top().second<queries2[j].first){
                pq.pop();

            }
            if(pq.empty()) ans[queries2[j].second]=-1;
            else
            ans[queries2[j].second]=pq.top().first;

j++;



        }
        return ans;


    }
};

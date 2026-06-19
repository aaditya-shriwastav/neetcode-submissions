class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
     
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
               int x=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            if(pq.size()<k){
                pq.push({x,i});

            }
            else{
                if(pq.top().first>x){
                    pq.pop();
                    pq.push({x ,i});

                }
            }
        }
        vector<vector<int>>ans;


        while(!pq.empty()){
            ans.push_back(points[pq.top().second]);
            pq.pop();


        }
        return ans;

        

    }
};

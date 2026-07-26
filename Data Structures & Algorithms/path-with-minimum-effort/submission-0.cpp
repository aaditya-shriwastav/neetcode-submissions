class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
       int n=heights.size();
       int m=heights[0].size();
priority_queue<pair<int,pair<int,int>>,
vector<pair<int,pair<int,int>>>,
greater<pair<int,pair<int,int>>>>pq;
vector<vector<int>>dis(n,vector<int>(m,1e9));


pq.push({0,{0,0}});
dis[0][0]=0;

while(!pq.empty())
{
    int currdiff=pq.top().first;
    int currrow=pq.top().second.first;
    int currcol=pq.top().second.second;

    pq.pop();

    vector<int>row={-1,0,1,0};
    vector<int>col={0,1,0,-1};

    for(int i=0;i<4;i++){
        int newrow=row[i]+currrow;
        int newcol=col[i]+currcol;

        if(newrow<n && newrow>=0 && newcol>=0 && newcol<m){
            int diff=abs(heights[newrow][newcol]-heights[currrow][currcol]);
int diffmax=max(diff,currdiff);

            if(diffmax<dis[newrow][newcol]){
                dis[newrow][newcol]=diffmax;
                pq.push({diffmax,{newrow,newcol}});

            }
        }
    }
}   

return dis[n-1][m-1];


    }
};
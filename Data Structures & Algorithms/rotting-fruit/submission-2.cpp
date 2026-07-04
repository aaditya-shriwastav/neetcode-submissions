class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

vector<vector<int>>visited(n,vector<int>(m,0));
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
greater<pair<int,pair<int,int>>>>pq;
bool x=false;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]==2){
            pq.push({0,{i,j}});
            visited[i][j]=1;


        }
       

    }
}
int finaltime=0;



while(!pq.empty()){

    int time=pq.top().first;
    int row=pq.top().second.first;
    int col=pq.top().second.second;
    pq.pop();
    finaltime=time;
    vector<int>nrow={-1,0,1,0};
    vector<int>ncol={0,1,0,-1};

    for(int i=0;i<4;i++){
        int newrow=row+nrow[i];
        int newcol=col+ncol[i];


        if(newrow<n && newrow>=0 && newcol>=0 && newcol<m &&
        grid[newrow][newcol]==1 && visited[newrow][newcol]==0){
            pq.push({time+1,{newrow ,newcol}});
            visited[newrow][newcol]=1;
        }

    }

}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]==1 && visited[i][j]==0){
        return -1;

        }
    }
}






return finaltime;

        
    }
};

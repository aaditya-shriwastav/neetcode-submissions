class Solution {
public:

void dfs(int row,int col,vector<vector<int>>&grid,int n,int m,int dis){



    vector<int>nrow={-1,0,1,0};
    vector<int>ncol={0,1,0,-1};

    for(int i=0;i<4;i++){
        int newrow=row+nrow[i];
        int newcol=col+ncol[i];


        if(newrow<n && newrow>=0 && newcol>=0 && newcol<m &&
        grid[newrow][newcol]>dis+1){
            grid[newrow][newcol]=dis+1;
            dfs(newrow,newcol,grid,n,m,dis+1);

        }

    }
    return;

}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();


        for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    if(grid[i][j]==0){
dfs(i,j,grid,n,m,0);

    }
}
        }

     

    }
};

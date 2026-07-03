class Solution {
public:

void dfs(vector<vector<char>>&grid,vector<vector<int>>&visi,int row,int col,int n,int m){


visi[row][col]=1;

vector<int>nrow={-1,0,1,0};
vector<int>ncol={0,1,0,-1};

for(int i=0;i<4;i++){
int newrow=row+nrow[i];
int newcol=col+ncol[i];

if(newrow<n && newrow>=0 && newcol>=0 && newcol<m && 
!visi[newrow][newcol] && grid[newrow][newcol]=='1'){
    dfs(grid,visi,newrow,newcol,n,m);

}
}
return;



}
    int numIslands(vector<vector<char>>& grid) {
       int n=grid.size();
       int m=grid[0].size();

       vector<vector<int>>visi(n,vector<int>(m,0));
int ans=0;

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visi[i][j] && grid[i][j]=='1'){
                dfs(grid,visi,i,j,n,m);

ans++;

            }
        }
       }
       return ans;


    }
};

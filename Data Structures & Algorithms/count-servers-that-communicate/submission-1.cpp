class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visi(n,vector<int>(m,0));


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int currrow=i;
                int currcol=j;
                if(grid[i][j]){
                    bool x1=false,x2=false;

                for(int x=0;x<m;x++){
if(grid[currrow][x] && x!=currcol){
visi[currrow][x]=1;
x1=true;


}
                }
                if(x1)visi[i][j]=1;

                 for(int x=0;x<n;x++){
if(grid[x][currcol] && x!=currrow){
visi[x][currcol]=1;
x2=true;


}
                }
                 if(x2)visi[i][j]=1;
            }
            }
        }
int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visi[i][j]){
cnt++;

                }
            }
        }

        return cnt;



    }
};
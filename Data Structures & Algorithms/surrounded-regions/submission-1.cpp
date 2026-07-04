class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            
                if(board[i][j]=='O' && (i==n-1 || j==m-1 || i==0 || j==0)){
q.push({i,j});
visited[i][j]=1;


                }
            }

        }

        while(!q.empty()){

            int row=q.front().first;
            int col=q.front().second;
            q.pop();


            vector<int>nrow={-1,0,1,0};
            vector<int>ncol={0,1,0,-1};

            for(int i=0;i<4;i++){
                int newrow=row+nrow[i];
                int newcol=col+ncol[i];

                if(newrow<n && newcol>=0 && newrow>=0 && newcol<m && 
                visited[newrow][newcol]==0 && board[newrow][newcol]=='O'){
                    q.push({newrow,newcol});
                    visited[newrow][newcol]=1;


                }

            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0){
                    board[i][j]='X';

                }

            }
        }
        
        return;

        
    }
};

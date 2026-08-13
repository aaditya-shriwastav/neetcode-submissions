class Solution {
public:

int dfs(int row,int col,vector<vector<int>>&matrix,int n,int m, vector<vector<int>>&dp){

    

    if(dp[row][col]!=-1)return dp[row][col];


    vector<int>rows={-1,0,1,0};
    vector<int>cols={0,1,0,-1};
      int maxi=0;

    for(int i=0;i<4;i++){
        int newrow=rows[i]+row;
        int newcol=cols[i]+col;
        if(newrow<n && newrow>=0 && newcol<m && newcol>=0 &&
        matrix[newrow][newcol]>matrix[row][col]){
            maxi=max(maxi,dfs(newrow,newcol,matrix,n,m,dp));
        }
    }

    return dp[row][col]= maxi+1;

}
    int longestIncreasingPath(vector<vector<int>>& matrix) {



        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=0;

        vector<vector<int>>dp(n,vector<int>(m,-1));



        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxi=max(maxi,dfs(i,j,matrix,n,m,dp));


            }
        }

        return maxi;

        
    }
};

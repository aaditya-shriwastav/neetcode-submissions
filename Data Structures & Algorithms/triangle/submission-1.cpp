class Solution {
public:

int ans(vector<vector<int>>&triangle,int row,int col, vector<vector<int>>&dp){


if(row==triangle.size()-1){
    return triangle[row][col];

}

if(dp[row][col]!=-1e9)return dp[row][col];

    int colleft=1e9,colright=1e9;
    colleft=triangle[row][col]+ans(triangle,row+1,col,dp);
    if(col+1<triangle[row+1].size())
    colright=triangle[row][col]+ans(triangle,row+1,col+1,dp);


    return dp[row][col]=min(colleft,colright);



}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();



        vector<vector<int>>dp(n,vector<int>(n,-1e9));


        return ans(triangle,0,0,dp);


        
        

    }
};
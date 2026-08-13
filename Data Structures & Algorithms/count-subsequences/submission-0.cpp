class Solution {
public:

int ans(int i,int j,string s,string t,int n,int m,vector<vector<int>>&dp){
    if(j==m)return 1;
    if(i==n)return 0;
    int sum=0;

    if(dp[i][j]!=-1)return dp[i][j];




    if(s[i]==t[j]){
        sum=ans(i+1,j,s,t,n,m,dp)+ans(i+1,j+1,s,t,n,m,dp);

    }
    else
   sum= ans(i+1,j,s,t,n,m,dp);

   return dp[i][j]=sum;




}
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));



        return ans(0,0,s,t,n,m,dp);


        
    }
};

class Solution {
public:
bool ans(int i,int j,int k,int n,int m,int l,string s1,string s2,string s3,vector<vector<vector<int>>>&dp){

    if(i==n && j==m && k==l){
        return true;

    }
    if(k==l)return false;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    bool r1=false,r2=false;


    if(s1[i]==s3[k]){
r1=ans(i+1,j,k+1,n,m,l,s1,s2,s3,dp);


    }
    if(s2[j]==s3[k]){
r2=ans(i,j+1,k+1,n,m,l,s1,s2,s3,dp);
    }

    return dp[i][j][k]= r1|r2;

}
    bool isInterleave(string s1, string s2, string s3) {

        int n=s1.size();
        int m=s2.size();
        int l=s3.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(l+1,-1)));



        return ans(0,0,0,n,m,l,s1,s2,s3,dp);

        
    }
};

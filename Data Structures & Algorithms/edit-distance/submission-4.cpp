class Solution {
public:
int ans(string s1,string s2,int i,int j,int n,int m, vector<vector<int>>&dp){

    if(j==m)return n-i;
    if(i==n)return m-j;
    if(dp[i][j]!=-1)return dp[i][j];


    if(s1[i]==s2[j]){
       return dp[i][j]= ans(s1,s2,i+1,j+1,n,m,dp);

    }
    
    return dp[i][j]= 1+min({ans(s1,s2,i+1,j+1,n,m,dp),
    ans(s1,s2,i,j+1,n,m,dp),ans(s1,s2,i+1,j,n,m,dp)});

}
    int minDistance(string word1, string word2) {

        int n=word1.size();

        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));


        return ans(word1,word2,0,0,n,m,dp);

        
    }
};

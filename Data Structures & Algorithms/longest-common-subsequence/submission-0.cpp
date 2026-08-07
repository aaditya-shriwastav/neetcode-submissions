class Solution {
public:

int ans(string text1,string text2,int n,int m,int ind1,int ind2,vector<vector<int>>&dp){

    if(ind1==n || ind2==m){
        return 0;

    }
    if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];




int take=0,nottake1=0,nottake2=0;

    if(text1[ind1]==text2[ind2 ]){
take=1+ans(text1,text2,n,m,ind1+1,ind2+1,dp);

    }
    else{
    nottake1=ans(text1,text2,n,m,ind1+1,ind2,dp);
    nottake2=ans(text1,text2,n,m,ind1,ind2+1,dp);
}


    return dp[ind1][ind2]= max({take,nottake1,nottake2});



}
    int longestCommonSubsequence(string text1, string text2) {

        int n=text1.size();
        int m=text2.size();


vector<vector<int>>dp(n,vector<int>(m,-1));


        return ans(text1,text2,n,m,0,0,dp);

        
    }
};

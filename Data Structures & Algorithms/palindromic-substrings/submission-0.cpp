class Solution {
public:


bool ispali(string s ,int i,int j,vector<vector<int>>&dp)
{
    if(i>=j)return dp[i][j]=true;
    if(dp[i][j]!=-1)return dp[i][j];



if(s[i]!=s[j])return dp[i][j]=false;

 if(!ispali(s,i+1,j-1,dp))return dp[i][j]=false;

 return dp[i][j]=true;




}
    int countSubstrings(string s) {
          int n=s.size();

        vector<vector<int>>dp(n,vector<int>(n,-1));
        int cnt=0;


        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
if(ispali(s,i,j,dp))cnt++;


            }
        }
        return cnt;
        
    }
};

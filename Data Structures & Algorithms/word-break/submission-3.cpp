class Solution {
public:

bool ans(string s,vector<string>& wordDict,int ind,vector<int>&dp){
    if(ind==s.size())
    return true;


if(dp[ind]!=-1){
    if(dp[ind]==1)return true;
    return false;  
}

    for(auto it:wordDict){
        if(ind+it.size()<=s.size()){
            if(s.substr(ind,it.size())==it){
if(ans(s,wordDict,ind+it.size(),dp))
return dp[ind]=true;


            }


        }
    }
    return dp[ind]=false;

}



    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        int m=wordDict.size();
        vector<int>dp(n+1,-1);


        return ans(s,wordDict,0,dp);


    }
};

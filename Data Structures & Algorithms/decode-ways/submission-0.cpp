class Solution {
public:




int ans(string s,int ind,vector<int>&dp){

    if(ind==s.size()-1)return 1;
    if(dp[ind+1]!=-1)return dp[ind+1];


int sum=0;


if(s[ind+1]!='0')
sum+=ans(s,ind+1,dp);

if(ind+2<s.size() && s[ind+1]!='0' && stoi(s.substr(ind+1,2))<=26){
    sum+=ans(s,ind+2,dp);

}

return dp[ind+1]=sum;





}
    int numDecodings(string s) {
        int n=s.size();

        vector<int>dp(n+1,-1);


        return ans(s,-1,dp);

      

        
    }
};

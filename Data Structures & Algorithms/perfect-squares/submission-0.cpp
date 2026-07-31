class Solution {
public:


int ans(int n,vector<int>&answ,vector<vector<int>>&dp,int ind){
    if(ind==answ.size()){
        if(n==0)return 0;
        return 1e9;

    }

    if(n==0)return 0;



if(dp[ind][n]!=-1)return dp[ind][n];

    int nottake=1e9,take=1e9;

    if(n-answ[ind]>=0){
        take=1+ans(n-answ[ind],answ,dp,ind);

    }

    nottake=ans(n,answ,dp,ind+1);

    if(nottake==1e9  && take==1e9)return 1e9;



    return dp[ind][n]= min(take,nottake);


}
    int numSquares(int n) {
        vector<int>answ;
        for(int i=1;i*i<=n;i++){
            answ.push_back(i*i);
                    }

                    vector<vector<int>>dp(answ.size(),vector<int>(n+1,-1));


                    return ans(n,answ,dp,0);


        
    }
};
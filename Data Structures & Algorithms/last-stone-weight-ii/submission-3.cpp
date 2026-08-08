class Solution {
public:
void ans(vector<int>&stones,int ind,int target,int tar,vector<int>&anss,int n,vector<vector<int>>&dp){
    if(ind<n && target-stones[ind]<0){
        anss.push_back(tar-target);
        anss.push_back(tar-(target-stones[ind]));
        return;



    }
    if(ind==n){
         anss.push_back(tar-target);
        return;

    }
if(dp[ind][target]!=-1)return;
dp[ind][target]=1;


  if(target-stones[ind]>=0)
ans(stones,ind+1,target-stones[ind],tar,anss,n,dp);
ans(stones,ind+1,target,tar,anss,n,dp);

return;



}
    int lastStoneWeightII(vector<int>& stones) {

    


        vector<int>anss;
int n=stones.size();
    

int sum=0;


for(int i=0;i<n;i++){
    sum+=stones[i];


}
int tar=sum/2;
if(sum%2)tar++;



vector<vector<int>>dp(n,vector<int>(tar+1,-1));


ans(stones,0,tar,tar,anss,n,dp);
int mini=sum;



for(int i=0;i<anss.size();i++){
    mini=min(mini,abs(sum-anss[i]-anss[i]));



}

return mini;





        
    }
};
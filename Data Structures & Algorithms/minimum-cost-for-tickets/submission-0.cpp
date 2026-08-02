class Solution {
public:

int ans(int ind,int n,vector<int>&days,vector<int>&costs,vector<int>&dp){


if(ind==n)return 0;

if(dp[ind]!=-1)return dp[ind];



int x1=upper_bound(days.begin(),days.end(),1+days[ind]-1)-days.begin();

    int one_day=costs[0]+ans(x1,n,days,costs,dp);

    int x2=upper_bound(days.begin(),days.end(),7+days[ind]-1)-days.begin();

    int seven_day=costs[1]+ans(x2,n,days,costs,dp);

    int x3=upper_bound(days.begin(),days.end(),30+days[ind]-1)-days.begin();

    int thirty_day=costs[2]+ans(x3,n,days,costs,dp);


    return dp[ind]= min({one_day,seven_day,thirty_day});





}

    int mincostTickets(vector<int>& days, vector<int>& costs) {

        int n  =days.size();
        vector<int>dp(n,-1);




        return ans(0,n,days,costs,dp);

        
    }
};
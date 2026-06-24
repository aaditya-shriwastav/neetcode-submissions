class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        int a=newInterval[0],b=newInterval[1];
        vector<vector<int>>ans;
        int x=lower_bound(intervals.begin(),intervals.end(),newInterval)-intervals.begin();
        vector<vector<int>>dinterval(n+1);
        for(int i=0;i<n+1;i++){
            if(i==x)dinterval[i]=newInterval;
            else if(i<x)dinterval[i]=intervals[i];
            else{
               dinterval[i]=intervals[i-1]; 
            }

          
        }
        for(int i=0;i<n+1;i++){
            if (ans.empty()){
                ans.push_back(dinterval[i]);

            }
            else{
                if(dinterval[i][0]<=ans[ans.size()-1][1]){
                    ans[ans.size()-1][0]=min(dinterval[i][0],ans[ans.size()-1][0]);
                     ans[ans.size()-1][1]=max(dinterval[i][1],ans[ans.size()-1][1]);
                    
                }
                else {
                    ans.push_back(dinterval[i]);

                }
            }
        }
        return ans;

        



  
    }
};

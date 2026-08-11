class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int n=heights.size();

stack<int>st;
vector<int>ans;

       for(int i=n-1;i>=0;i--){

        while(!st.empty() && st.top()<heights[i]){
            st.pop();

        }
        if(st.empty()){
            ans.push_back(i);

        }
        st.push(heights[i]);


       }


       sort(ans.begin(),ans.end());


       return ans;

        
    }
};
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> res(n);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            int h = heights[i];
            while (!st.empty() && heights[st.top()] < h) {
                res[st.top()]++;
                st.pop();
            }
            if (!st.empty()) {
                res[st.top()]++;
            }
            st.push(i);
        }
        return res;
    }
};
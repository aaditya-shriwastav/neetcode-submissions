class Solution {
public:
    bool ans(const string &s, int ind, stack<char> &st, vector<vector<int>> &dp) {

        if (ind == s.size()) {
            return st.empty();
        }

        int open = st.size();

        if (dp[ind][open] != -1)
            return dp[ind][open];

        if (s[ind] == '*') {

            // Treat '*' as '('
            st.push('(');
            if (ans(s, ind + 1, st, dp))
                return dp[ind][open] = true;
            st.pop();

            // Treat '*' as ')'
            if (!st.empty()) {
                st.pop();
                if (ans(s, ind + 1, st, dp))
                    return dp[ind][open] = true;
                st.push('(');
            }

            // Treat '*' as empty
            if (ans(s, ind + 1, st, dp))
                return dp[ind][open] = true;
        }
        else {

            if (s[ind] == '(') {
                st.push('(');
                if (ans(s, ind + 1, st, dp))
                    return dp[ind][open] = true;
                st.pop();
            }
            else { // ')'
                if (!st.empty()) {
                    st.pop();
                    if (ans(s, ind + 1, st, dp))
                        return dp[ind][open] = true;
                    st.push('(');
                }
            }
        }

        return dp[ind][open] = false;
    }

    bool checkValidString(string s) {
        int n = s.size();

        stack<char> st;
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return ans(s, 0, st, dp);
    }
};

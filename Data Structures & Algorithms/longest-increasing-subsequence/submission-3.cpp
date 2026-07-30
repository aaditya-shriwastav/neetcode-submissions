class Solution {
public:
    int lis(vector<int>& nums, int ind, vector<vector<int>>& dp, int prev) {

        if (ind == nums.size())
            return 0;

        if (dp[ind][prev + 1] != -1)
            return dp[ind][prev + 1];

        int nottake = lis(nums, ind + 1, dp, prev);

        int take = 0;

        if (prev == -1 || nums[ind] > nums[prev])
            take = 1 + lis(nums, ind + 1, dp, ind);

        return dp[ind][prev + 1] = max(take, nottake);
    }

    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return lis(nums, 0, dp, -1);
    }
};

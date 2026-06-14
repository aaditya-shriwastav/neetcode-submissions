class Solution {
public:
    bool solve(int idx, vector<int>& matchsticks,
               vector<int>& sides, int target) {

        if (idx == matchsticks.size()) {
            return sides[0] == target &&
                   sides[1] == target &&
                   sides[2] == target &&
                   sides[3] == target;
        }

        for (int i = 0; i < 4; i++) {

            if (sides[i] + matchsticks[idx] > target)
                continue;

            sides[i] += matchsticks[idx];

            if (solve(idx + 1, matchsticks, sides, target))
                return true;

            sides[i] -= matchsticks[idx];

            // Optimization
            if (sides[i] == 0)
                break;
        }

        return false;
    }

    bool makesquare(vector<int>& matchsticks) {

        long long sum = 0;

        for (int x : matchsticks)
            sum += x;

        if (sum % 4 != 0)
            return false;

        int target = sum / 4;

        // Important optimization
        sort(matchsticks.rbegin(), matchsticks.rend());

        if (matchsticks[0] > target)
            return false;

        vector<int> sides(4, 0);

        return solve(0, matchsticks, sides, target);
    }
};
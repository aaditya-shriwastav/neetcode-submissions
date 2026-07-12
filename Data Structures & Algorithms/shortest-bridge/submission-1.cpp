class Solution {
public:
    vector<int> drow = {-1, 0, 1, 0};
    vector<int> dcol = {0, 1, 0, -1};

    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited,
             int row, int col, int n, int m) {

        visited[row][col] = 1;

        for (int i = 0; i < 4; i++) {
            int nr = row + drow[i];
            int nc = col + dcol[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                !visited[nr][nc] && grid[nr][nc] == 1) {

                dfs(grid, visited, nr, nc, n, m);
            }
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));

        int sr = -1, sc = -1;
        bool found = false;

        // Find one island
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    sr = i;
                    sc = j;
                    found = true;
                    break;
                }
            }
        }

        // Mark first island
        dfs(grid, visited, sr, sc, n, m);

        queue<pair<pair<int, int>, int>> q;

        // Push all cells of first island
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j]) {
                    q.push({{i, j}, 0});
                }
            }
        }

        while (!q.empty()) {

            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {

                int nr = row + drow[i];
                int nc = col + dcol[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    !visited[nr][nc]) {

                    // Reached second island
                    if (grid[nr][nc] == 1)
                        return dis;

                    visited[nr][nc] = 1;
                    q.push({{nr, nc}, dis + 1});
                }
            }
        }

        return -1;
    }
};
class Solution {
public:
 void answer(int col, int n, vector<string>& board, vector<vector<string>>& ans) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (haaa(n, row, col, board)) {
                board[row][col] = 'Q';
                answer(col + 1, n, board, ans);
                board[row][col] = '.';
            }
        }
    }

    bool haaa(int n, int row, int col, vector<string>& board) {
      
        int r = row, c = col;
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r--; c--;
        }

    
        c = col;
        while (c >= 0) {
            if (board[row][c] == 'Q') return false;
            c--;
        }

        r = row; c = col;
        while (r < n && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r++; c--;
        }

        return true;
    }

    int totalNQueens(int n) {
       vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        answer(0, n, board, ans);
        return ans.size(); 
    }
};
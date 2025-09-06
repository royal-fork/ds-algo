class Solution {
public:
    int count = 0;

    bool safe(int row, int col, vector<string>& board, int n) {
        int dupr = row;
        int dupc = col;

        // upper-left diagonal
        while (dupr >= 0 && dupc >= 0) {
            if (board[dupr][dupc] == 'Q') return false;
            dupr--;
            dupc--;
        }

        // left row
        dupr = row; dupc = col;
        while (dupc >= 0) {
            if (board[dupr][dupc] == 'Q') return false;
            dupc--;
        }

        // lower-left diagonal
        dupr = row; dupc = col;
        while (dupr < n && dupc >= 0) {
            if (board[dupr][dupc] == 'Q') return false;
            dupc--;
            dupr++;
        }
        return true;
    }

    void solver(int col, vector<string>& board, int n) {
        if (col == n) {
            count++;
            return;
        }
        for (int row = 0; row < n; row++) {
            if (safe(row, col, board, n)) {
                board[row][col] = 'Q';
                solver(col + 1, board, n);
                board[row][col] = '.'; 
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solver(0, board, n);
        return count;
    }
};

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solver(board);
        
    }
    bool solver(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] ==  '.'){
                    for(char c='1'; c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;

                            if(solver(board)==true) return true;
                            else board[i][j]='.';
                         }

                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
        for (int k = 0; k < 9; k++) {
            if (board[row][k] == c) return false;               // check row
            if (board[k][col] == c) return false;               // check col
            if (board[(row / 3) * 3 + k / 3][(col / 3) * 3 + k % 3] == c) 
                return false; // check 3x3 box
        }
        return true;
    }
};
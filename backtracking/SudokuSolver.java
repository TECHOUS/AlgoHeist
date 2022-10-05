public class Solution {
    public void solveSudoku(char[][] board) {
        solve(board);
    }
    
    public boolean solve(char[][] board){
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                if(board[i][j] == '.'){
                    for(char c = '1'; c <= '9'; c++){// Trying from 1 to 9
                        if(isSafe(board, i, j, c)){
                            board[i][j] = c; // inserting value in cell
                            
                            if(solve(board))
                                return true; //found answer so return true;
                            else
                                board[i][j] = '.'; // backtracking
                        }
                    }
                    
                    return false;
                }
            }
        }
        return true;
    }
    
    private boolean isSafe(char[][] board, int row, int col, char c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] != '.' && board[i][col] == c) return false; //check row
            if(board[row][i] != '.' && board[row][i] == c) return false; //check column
            
            //checking 3*3 box
            int rowStart = row - row % 3;
            int colStart = col - col % 3;
            for(int r=rowStart;r<rowStart+3;r++){
                for(int co=colStart;co<colStart+3;co++){
                    if(board[r][co] == c) return false;
                }
            }
        }
        return true;
    }
}

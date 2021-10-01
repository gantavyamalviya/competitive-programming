class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int v1[9][9] = {0};
        int v2[9][9] = {0};
        int v3[9][9] = {0};
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]!='.')
                {
                    int num = board[i][j] - '0' - 1, k = i/3 * 3 + j/3;
                    if(v1[i][num] or v2[j][num] or v3[k][num]) 
                        return false;
                    v1[i][num] = v2[j][num] = v3[k][num] = 1;
                }
            }
        }
        return true;
    }
};

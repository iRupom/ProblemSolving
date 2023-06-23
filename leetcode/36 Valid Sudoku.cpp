class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int cnt = 9;
        int row[cnt][cnt];
        int column[cnt][cnt];
        int subboard[cnt][cnt];

        memset(row,0,sizeof(row));
        memset(column,0,sizeof(column));
        memset(subboard,0,sizeof(subboard));

        for(int r = 0;r<9;r++) {
            for(int c = 0;c<9;c++) {
                if(board[r][c] =='.') {
                    continue;
                }

                int index = board[r][c]-'0'-1;
                int areanumber = (r/3)*3 + (c/3);

                if(row[r][index] or column[c][index] or subboard[areanumber][index]) {
                    return false;
                }
                row[r][index] = 1;
                column[c][index] = 1;
                subboard[areanumber][index] = 1;
            }
        }

        return true;

    }
};

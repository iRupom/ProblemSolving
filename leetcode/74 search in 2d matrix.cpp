class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[row].size()-1;

        while(row<matrix.size() and col>=0) {
            if(matrix[row][col]==target) {
                return true;
            } else if(matrix[row][col]<target) {
                row++;
            } else {
                col--;
            }
        }

        return false;
    }
};

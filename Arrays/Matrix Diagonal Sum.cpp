/*
FIRST APPROACH
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        if(row == 1)
            return mat[row-1][row-1];
        int sum = 0;
        for(int i = 0; i< row; i++){
            for(int j = 0; j<col; j++){
                if(i == j)
                    sum += mat[i][j];
                if(i+j == row -1)
                    sum += mat[i][j];
            }
        }
        if(row %2 !=0){
            sum -= mat[row/2][col/2];
        }
        return sum;
    }
};

/*
SECOND APPROACH
*/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        if(row == 1)
            return mat[row-1][row-1];
        int i = 0, j = row-1, sum = 0;
        for(int k = 0; k<row; k++){
            sum += mat[i][k] + mat[j][k];
            i++;
            j--;
        }
        if(row %2 !=0){
            sum -= mat[row/2][col/2];
        }
        return sum;
    }
};

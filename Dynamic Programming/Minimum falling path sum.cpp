/*
Given a square array of integers A, we want the minimum sum of a falling path through A.
A falling path starts at any element in the first row, and chooses one element from each row.  The next row's choice must be in a column that is different from the previous row's column by at most one.

Example 1:
Input: [[1,2,3],[4,5,6],[7,8,9]]
Output: 12

Explanation: 
The possible falling paths are:
[1,4,7], [1,4,8], [1,5,7], [1,5,8], [1,5,9]
[2,4,7], [2,4,8], [2,5,7], [2,5,8], [2,5,9], [2,6,8], [2,6,9]
[3,5,7], [3,5,8], [3,5,9], [3,6,8], [3,6,9]
The falling path with the smallest sum is [1,4,7], so the answer is 12.

*/
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int row = A.size();
        int column = A[0].size();
        for(int i = 1; i<row; i++){
            //scanning middle row
            for(int j = 0; j<column; j++){
                //Leftmost or first column
                if(j == 0)                                                    
                    A[i][j] += min(A[i-1][j],A[i-1][j+1]);
                //Rightmost or last column
                else if(j == column-1)
                    A[i][j] += min(A[i-1][j],A[i-1][j-1]); 
                //Remaining cases
                else
                    A[i][j] += min({A[i-1][j],A[i-1][j+1],A[i-1][j-1]}); 
            }
        }
        int sum=INT_MAX;
        //now taking the minimum A[i][j] out of the last row (we calculated A[i][j] above)
        for(int i = 0; i<column; i++){
            sum = min(sum,A[row-1][i]);                                      
        }
        return sum;
    }
};

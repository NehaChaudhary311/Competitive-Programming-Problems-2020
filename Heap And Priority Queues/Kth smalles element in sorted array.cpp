/*

Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.
matrix = [
   [ 1,  5,  9],
   [10, 11, 13],
   [12, 13, 15]
],
k = 8,

return 13.

*/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue <int> p;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                p.push(matrix[i][j]);
                if(p.size()>k)
                   p.pop();
            }
        }
        return p.top();
    }
};

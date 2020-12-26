/*
Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

Example 1:
Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.

*/

int myCount(int mid, int mat[MAX][MAX], int n){
    int row = 0;
    int col = n - 1;
    int count = 0;
    while( row < n && col >= 0){
        if(mat[row][col] <= mid){
            count += col + 1;
            row++;
        }else{
            col--;
        }
        
    }
    return count;
}
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int le = mat[0][0];
  int ri = mat[n-1][n-1];
  int mid = 0;
  while(le < ri){
      mid = le + (ri - le)/2;
      if(myCount(mid, mat, n) < k){
          le = mid + 1;
      }
      else{
          ri = mid;
      }
  }
  return le;
}

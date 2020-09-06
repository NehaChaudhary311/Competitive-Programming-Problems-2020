/*

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

Output: 16

*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per=0;
        //Number of rows
        int n = grid.size();
        
        for(int i=0;i<n;i++){
            //number of the columns
            int m = grid[i].size();
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(i==0 || grid[i-1][j]!=1) per++;
                    if(j==0 || grid[i][j-1]!=1) per++;
                    if(i==n-1 || grid[i+1][j]!=1) per++;
                    if(j==m-1 || grid[i][j+1]!=1) per++; 
                }
               
            }
        }
        return per;
    }
};

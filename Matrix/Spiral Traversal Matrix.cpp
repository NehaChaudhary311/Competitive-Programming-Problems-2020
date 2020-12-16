class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        if(matrix[0].size() == 0) return ans;
        int r1 = 0, r2 = r - 1;
        int c1 = 0, c2 = c - 1;
        while(r1 <= r2 && c1 <= c2){
            //top row
            for(int i = c1; i <= c2; i++) ans.push_back(matrix[r1][i]);
            //right col
            for(int i = r1 + 1; i <= r2; i++) ans.push_back(matrix[i][c2]);
            if(r1 < r2 && c1 < c2){
                //bottom row
                for (int i = c2 - 1; i > c1; i--) ans.push_back(matrix[r2][i]);
                //left col
                for (int i = r2; i > r1; i--) ans.push_back(matrix[i][c1]);
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return ans;
    }
};

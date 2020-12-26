
//Since the rows are sorted, we start finding from the first column of the matrix
//We traverse downwards
//Wherever we find the first 1, we return the row of that 1
//Time Complexity: O(m+n)
//Space Complexity: O(1)
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max_val = 0;
	    //j is for column
	    //i is for row
	    for(int j = 0; j<m; j++){
	        for(int i = 0; i<n; i++){
	            if(arr[i][j] == 1) return i;
	        }
	    }
	    return -1;
	}

};

//NAIVE APPROACH 
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        priority_queue<int> pq;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                pq.push(matrix[i][j]);
            }
        }
        if(pq.size() %2 != 0){
            int n = pq.size()/2;
            for(int i = 0; i< n; i++){
                pq.pop();
            }
            return pq.top();
        }
        else{
            int n = (pq.size()/2) - 1;
            int x1 = pq.top();
            pq.pop();
            int x2 = pq.top();
            return (x1+x2)/2;
        }
    }
};

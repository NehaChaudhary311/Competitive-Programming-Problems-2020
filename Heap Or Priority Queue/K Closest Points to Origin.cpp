/*

We have a list of points on the plane.  Find the K closest points to the origin (0, 0).
(Here, the distance between two points on a plane is the Euclidean distance.)
You may return the answer in any order.  The answer is guaranteed to be unique (except for the order that it is in.)

Example 1:
Input: points = [[1,3],[-2,2]], K = 1
Output: [[-2,2]]
Explanation: 
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].

Example 2:
Input: points = [[3,3],[5,-1],[-2,4]], K = 2
Output: [[3,3],[-2,4]]
(The answer [[-2,4],[3,3]] would also be accepted.)

*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n=points.size();
        
        vector<vector<int>> sol;
        
        if(n==0)
             return sol;
        
			priority_queue<pair<double,int>> pq;      
			
			/* heap will contain the eucledian distance and the index of the coodinates   instead of the pair of coordinates itself for  
			simpler coding. We use a max heap as all distance more  than k smallest ones have to be eliminated */
        
        for(int i=0;i<n;i++)
        {
            double value = pow(points[i][0],2) + pow(points[i][1],2); 
			
			//you can skip the sqrt function and still will work as sqrt(num1) >sqrt(num2) if num1>num2
			                                                                               
            pq.push(make_pair(value,i));  
			
            if(pq.size()>K)       //eliminating all the distances higher the kth smallest distance
               pq.pop();            
            
        }
        
        while(!pq.empty())   // the heap only contains the k closest distances
        {
            vector<int> ans;
            int temp=pq.top().second;// the index of the pair of coordinates
           
            pq.pop();
            
            ans.push_back(points[temp][0]);
            ans.push_back(points[temp][1]);
            
            sol.push_back(ans);
            
            
        }
        
       return sol; 
        
        
    }
};

/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

Example 1:
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
 

Example 2:
Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3  
+ Arr4 =1000,
which is maximum.

*/

//Space: O(1)
//Time: O(N)
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i = 0, j = 0;
        int mx = INT_MIN;
        int sum = 0;
        while(j < N){
            sum += Arr[j];    //adding the jth index element
            if((j-i+1) < K) j++;
            else if((j-i+1) == K){
                mx = max(mx, sum);
                sum = sum - Arr[i]; //removing the ith index element
                i++;
                j++;
            }
        }
        return mx;
    }
};

/*
Given an array A[] of size N, construct a Product Array P (of same size N) such that P[i] is equal to the product of all the elements of A except A[i].

Example 1:
Input:
N = 5
A[] = {10, 3, 5, 6, 2}
Output: 180 600 360 300 900
Explanation: 
For i=0, P[i] = 3*5*6*2 = 180.
For i=1, P[i] = 10*5*6*2 = 600.
For i=2, P[i] = 10*3*6*2 = 360.
For i=3, P[i] = 10*3*5*2 = 300.
For i=4, P[i] = 10*3*5*6 = 900.
 
Example 2:
Input:
N = 2
A[] = {12,0}
Output: 0 12
*/
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here    
    vector<long long int> res(n,0);
    vector<long long int> left(n, 1);
    vector<long long int> right(n, 1);
    
    left[0] = 1;
    right[n-1] = 1;
    
    //calculating the left array
    for(int i = 1; i<n; i++){
        left[i] = nums[i-1]*left[i-1];
    }
    //calculating the right array
    for(int i = n-2; i>= 0; i--){
        right[i] = nums[i+1]*right[i+1];
    }
    //calculating the result array array
    for(int i = 0; i<n; i++){
        res[i] = left[i]*right[i];
    }
    return res;
}

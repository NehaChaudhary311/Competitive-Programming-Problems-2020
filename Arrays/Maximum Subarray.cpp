// Using Kadane's Algorithm
/*
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

#include<iostream>
#include<algorithm>
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_so_far = INT_MIN;
    int curr_sum = 0;
    for(int i = 0; i<n; i++){
        curr_sum += arr[i];
        max_so_far = max(max_so_far, curr_sum);
        curr_sum = max(curr_sum, 0);
    }
    return max_so_far;
}

/*
Given an array arr[] of distinct integers of size N and a sum value X, the task is to find count of triplets with the sum smaller than the given sum value X.
Example 1:
Input: N = 6, X = 2
arr[] = {-2, 0, 1, 3}
Output:  2
Explanation: Below are triplets with 
sum less than 2 (-2, 0, 1) and (-2, 0, 3). 

Example 2:
Input: N = 5, X = 12
arr[] = {5, 1, 3, 4, 7}
Output: 4
Explanation: Below are triplets with 
sum less than 12 (1, 3, 4), (1, 3, 5), 
(1, 3, 7) and (1, 4, 5).
*/

class Solution{	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count = 0;
	    sort(arr, arr+n);
	    for(int i = 0; i<n; i++){
	        //skipping duplicates
	        if(i>0 && arr[i] == arr[i-1]) continue;
	        int left = i+1;
	        int right = n -1;
	        while(left < right){
	            long long curr_sum = arr[i] + arr[left] + arr[right];
	            if(curr_sum < sum){
	                count += right - left;
	                //skipping duplicates
	                while(left < right && arr[left] == arr[left+1]) left++;
    	            while(left < right && arr[right] == arr[right-1]) right--;
    	            left++;
	            }
	            else if(curr_sum >= sum){
	                right--;
	            }
	            
	        }
	    }
	    return count;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

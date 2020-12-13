
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    unordered_set<int> s; 
    int curr_sum = 0; 
    for (int i = 0 ; i < n ; i++) 
    { 
        curr_sum += arr[i]; 
        //either sum is zero or already exists in the set-if yes then return true
        if (curr_sum == 0 || s.find(curr_sum) != s.end()) 
            return true; 
  
        s.insert(curr_sum); 
    } 
    return false; 
}



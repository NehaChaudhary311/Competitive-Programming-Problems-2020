// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n){
    // Your code here
    int* jumps = new int[n];
    if (n == 0 || arr[0] == 0) return -1;
 
    jumps[0] = 0;
 
    for (int i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (int j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    return jumps[n - 1];
    
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends

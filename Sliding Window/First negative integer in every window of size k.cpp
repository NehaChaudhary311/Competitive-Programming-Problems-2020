/*
Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.
Input:
2
5
-8 2 3 -6 10
2
8
12 -1 -7 8 -15 30 16 28
3

Output:
-8 0 -6 -6
-1 -1 -7 -15 -15 0

*/

#include<iostream>
#include<vector>
#include<deque>
using namespace std;
void firstNegativeInt(vector<int> arr, int n, int k){
    vector<int> ans;
    deque<int> list;
    
    int i = 0, j = 0;
    while(j < arr.size()){
        //if the jth element is negative, push it in the queue
        if(arr[j] < 0) list.push_back(arr[j]);
        
        
        if((j-i+1) < k){
            j++;
        }
        //if we have hit the window size
        else if((j-i+1) == k){
            if(!list.empty())
                ans.push_back(list.front());
            else ans.push_back(0);
            
            //making changes for ith position
            //important
            if(arr[i]<0) list.pop_front();
            i++; 
            j++;
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    vector<int>arr(n, 0);
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    } 
	    cin>>k;
	    firstNegativeInt(arr, n, k);   
	    cout<<endl;
	}
	return 0;
}

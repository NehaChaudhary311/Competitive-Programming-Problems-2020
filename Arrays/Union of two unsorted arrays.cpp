/*
APPROACH 1: Use unordered_set O(nlogm + mlogn)
Keep putting all the elements of both the arrays in a set. Set will not allow duplicate values
*/

/*
APPROACH 2: Use map O(n+m)
Keep storing the frequency of each element from both the arrays. Return the size of the map
*/

/*
APPROACH 3: Use binary search on smaller array(sort the smaller array)
Traverse the larger size array and binary search the element from larger array in sorted smaller array, if found? ans-- from ans=m+n
But this approach will not work for test cases where the elements are not distinct 
like 1 1 2 2 3 3 and 8 9 7 6 5. Here, output should be 8, but the algorithm will give 11 as output.
*/

#include<iostream>
#include<unordered_set>
using namespace std;

//Approach 1
int unionFunc(int A[], int B[], int n, int m){
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        s.insert(A[i]);
    }
    for(int i = 0; i<m; i++){
        s.insert(B[i]);
    }
    return s.size();
}
int main()
 {
	//code 
	int T;
	cin>>T;
	while(T--){
	    int N, M;
	    cin>>N>>M;
	    int *A = (int*)malloc(sizeof(int)*N);
	    int *B = (int*)malloc(sizeof(int)*M);
	    for(int i = 0; i<N; i++){
	        cin>>A[i];
	    }
	    for(int j = 0; j<M; j++){
	        cin>>B[j];
	    }
	    cout<<unionFunc(A, B, N, M)<<endl;
	}
	return 0;
}

//Approach 3
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return true;
            
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
    return false;
}
int unionFunc(int A[], int B[], int n, int m){
    int ans = m + n;
    if(m >= n){
        sort(B, B+n);
        for(int i = 0; i<m; i++){
            int x = A[i];
            if(binarySearch(B, 0, n-1, x)) 
                ans--;
        }
        return ans;
    }else{
        sort(A, A + m);
        for(int i = 0; i<n; i++){
            int x = B[i];
            if(binarySearch(A, 0, m-1, x)) 
                ans--;
        }
        return ans;
    }
    
}

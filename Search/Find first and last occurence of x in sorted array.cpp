#include<iostream>
#include<vector>
using namespace std;
int first(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int res = -1;
    while (low <= high) {
        int mid = low +(high - low)/2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            res = mid;
            //finding more x on the left to get the first occurence
            high = mid - 1;
        }
    }
    return res;
}
int last(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1;
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;

        else {
            res = mid;
            //finding more x if any on the right to get the last occurence
            low = mid + 1;
        }
    }
    return res;
}
int main()
 {
	//code
	int t;
	cin>>t;
	int n, x;
	cin>>n>>x;
	vector<int> a(n, 0);
	for(int i = 0; i<n; i++){
	    cin>>a[i];
	}
	if(first(a,x) >= 0 && last(a,x) >= 0){
	    cout<<first(a, x)<<" ";
	    cout<<last(a, x)<<endl;
	}
	else{
	    cout<<"-1"<<endl;
	}
	
	return 0;
}

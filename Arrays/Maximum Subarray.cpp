// Using Kadane's Algorithm
/*
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int kadane(vector<int> &num){
    int curr_sum = num[0];
    int max_sum = curr_sum;
    for(int i = 1; i<num.size(); i++){
        curr_sum = max(curr_sum + num[i], num[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
int main()
 {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    vector<int> num(n, 0);
	    for(int i = 0; i<num.size(); i++){
	        cin>>num[i];
	    }
        cout<<kadane(num)<<endl;
	}
	
	return 0;
}

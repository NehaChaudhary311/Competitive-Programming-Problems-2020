#include<vector>
#include<queue>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> a(n, vector<int> (n, 0));
	    for(int i = 0; i<n; i++){
	        for(int j = 0; j<n; j++){
	            cin>>a[i][j];
	        }
	    }
	    priority_queue<int> pq;
	    //by default, it is a max heap
	    //to create a min, heap, we'll enter negative of each number in matrix
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                pq.push((-1)*a[i][j]);
            }
        }
        while(!pq.empty()){
            cout<<(-1)*pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
	}
	return 0;
}
